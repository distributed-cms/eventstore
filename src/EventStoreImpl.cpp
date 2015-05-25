/*
 * EventStoreImpl.cpp
 *
 *  Created on: 25 de may. de 2015
 *      Author: carlos
 */

#include "EventStoreImpl.h"

namespace event {


using grpc::ServerContext;
using grpc::Status;
using grpc::ServerWriter;

using namespace common;

EventStoreImpl::EventStoreImpl() {
}

EventStoreImpl::~EventStoreImpl() {
}

Status EventStoreImpl::get_events(ServerContext* context, const Uuid* request, ServerWriter<Event>* writer)
{
	return Status::OK;
}


} /* namespace event */
