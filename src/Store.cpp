/*
 * Store.cpp
 *
 *  Created on: 24 de may. de 2015
 *      Author: carlos
 */

#include "Store.h"
#include <sstream>
#include <cassert>
#include <iomanip>

namespace event {

using grpc::ServerContext;
using grpc::Status;
using grpc::ServerWriter;


using namespace std;
using namespace common;

Store::Store() : m_context(redisConnect("127.0.0.1", 6379)){
	assert(m_context != nullptr);
	assert(!m_context->err);
}

Store::~Store(){
	redisFree(m_context);
}

void Store::on_receive(const char * msg) {
	Event event{};
	if (event.ParseFromString(string{msg})){
		event.aggregate_id();
		event.serialized_data();
	}
}

Status Store::get_events(ServerContext* context, const Uuid* request, ServerWriter<Event>* writer)
{
	return Status::OK;
}

void Store::add_event(Event & evt)
{
	//redisReply * reply = redisCommand(m_context, "SET key:%s %s", to_str(evt.aggregate_id()).c_str(), evt.serialized_data().c_str());
	//redisReply * reply = redisCommand(m_context, "RPUSH key:%s %s", to_str(evt.aggregate_id()).c_str(), evt.serialized_data().c_str());

	redisReply * reply = redisCommand(m_context, "ZADD key:%s %d %s", to_str(evt.aggregate_id()).c_str(), time(0), evt.serialized_data().c_str());
	cout << reply->str << endl;
    freeReplyObject(reply);

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
