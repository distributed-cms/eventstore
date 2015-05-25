/*
 * EventStoreImpl.h
 *
 *  Created on: 25 de may. de 2015
 *      Author: carlos
 */

#ifndef EVENTSTOREIMPL_H_
#define EVENTSTOREIMPL_H_

#include <grpc++/server.h>
#include <grpc++/server_context.h>
#include <grpc++/status.h>
#include "event_store.grpc.pb.h"

namespace event {

class EventStoreImpl final: public EventStore::Service {
public:
	explicit EventStoreImpl();
	virtual ~EventStoreImpl() = default;


    virtual grpc::Status get(::grpc::ServerContext* context, const Uuid* request, ::grpc::ServerWriter<Event>* writer) override;
};

} /* namespace event */
