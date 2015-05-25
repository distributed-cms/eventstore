/*
 * Store.cpp
 *
 *  Created on: 24 de may. de 2015
 *      Author: carlos
 */

#include "Store.h"

namespace event {


using grpc::ServerContext;
using grpc::Status;
using grpc::ServerWriter;

using namespace common;

Store::Store() {
	// TODO Auto-generated constructor stub

}

void Store::on_receive(const char * msg) {
	// TODO save the data
}

Status Store::get_events(ServerContext* context, const Uuid* request, ServerWriter<Event>* writer)
{
	return Status::OK;
}


}
