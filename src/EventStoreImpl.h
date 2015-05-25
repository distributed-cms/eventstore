/*
 * EventStoreImpl.h
 *
 *  Created on: 25 de may. de 2015
 *      Author: carlos
 */

#ifndef EVENTSTOREIMPL_H_
#define EVENTSTOREIMPL_H_

//#include <grpc++/server.h>
//#include <grpc++/server_context.h>
//#include <grpc++/stream.h>
//#include <grpc++/status.h>
#include "event_store.grpc.pb.h"

namespace event {

class EventStoreImpl final: public EventStore::Service {

public:
	explicit EventStoreImpl();
	~EventStoreImpl();

    grpc::Status get_events(grpc::ServerContext* context, const common::Uuid* request, grpc::ServerWriter<common::Event>* writer) override;
};

} /* namespace event */

#endif /* EVENTSTOREIMPL_H_ */
