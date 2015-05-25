/*
 * EventStoreImpl.cpp
 *
 *  Created on: 25 de may. de 2015
 *      Author: carlos
 */

#include "EventStoreImpl.h"

namespace event {

using namespace grpc;

EventStoreImpl::EventStoreImpl() {
	// TODO Auto-generated constructor stub

}

EventStoreImpl::~EventStoreImpl() {
	// TODO Auto-generated destructor stub
}

Status get(ServerContext* context, const Uuid* request, ServerWriter<Event>* writer)
{
	return StatusCode::OK;
}

} /* namespace event */
