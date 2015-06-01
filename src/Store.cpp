/*
 * Store.cpp
 *
 *  Created on: 24 de may. de 2015
 *      Author: carlos
 */

#include "Store.h"
#include <iostream>
#include <sstream>
#include <cassert>
#include <iomanip>

namespace event {

using grpc::ServerContext;
using grpc::Status;
using grpc::ServerWriter;


using namespace std;
using namespace common;

const char * Store::FMT_RANGE = "ZRANGE %s 0 -1";
const char * Store::FMT_ADD = "ZADD %s %d %s";

Store::Store() : m_context(redisConnect("127.0.0.1", 6379)){
	assert(m_context != nullptr);
	assert(!m_context->err);
}

Store::~Store(){
	redisFree(m_context);
}

void Store::on_receive(const char * msg) {
	Event event{};
	const string msg_str = msg;
	if (event.ParseFromString(msg_str)){
		event.aggregate_id();
		event.serialized_data();
	}
}

Status Store::get_events(ServerContext* context, const Uuid* request, ServerWriter<Event>* writer)
{
	Status status = Status::OK;
	string id_str = to_str(*request);
	redisReply * reply = static_cast<redisReply *>(redisCommand(m_context, FMT_RANGE, id_str.c_str()));
	if (reply == nullptr)
	{
		cerr  << m_context->errstr << endl;
		status = Status::Cancelled;
	}
	else
	{
		if (reply->type == REDIS_REPLY_ARRAY)
		{
			for (unsigned i=0; i<reply->elements; i++)
			{
				cout << reply->element[i] << endl;
			}

		}else
		{
			cerr << "unexpected reply type " << reply->type << endl;
			status = Status::Cancelled;
		}
		freeReplyObject(reply);
	}
	return status;
}

void Store::add_event(Event & evt)
{
	const Uuid & id = evt.aggregate_id();
	string id_str = to_str(id);
	cout << "saving " << id_str  << endl;
	redisReply * reply = static_cast<redisReply *>(redisCommand(m_context, FMT_ADD, id_str.c_str(), time(0), evt.serialized_data().c_str()));
	if (reply == nullptr)
	{
		cerr  << m_context->errstr << endl;
	}else
	{
		cout << reply->type << endl;
		freeReplyObject(reply);
	}
}


auto convert_to_hex = [] (stringstream & stream, int64_t l) { stream << setfill('0') << setw(16) << hex << l; };


string Store::to_str(const Uuid & uuid)
{
	// 8-4-4-4-12
	stringstream stream;
	convert_to_hex(stream, uuid.most_significant_bits());
	convert_to_hex(stream, uuid.least_significant_bits());
	string result( stream.str() );
	for (int i=0; i<4; i++)
	{
		result.insert(8 + (i * 4) + i, 1, '-');
	}
	return result;
}

}
