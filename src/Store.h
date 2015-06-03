/*
 * Store.h
 *
 *  Created on: 24 de may. de 2015
 *      Author: carlos
 */

#ifndef STORE_H_
#define STORE_H_

#include "event_store.grpc.pb.h"
#include "EventBusSubscriber.h"
#include <vector>
#include <hiredis/hiredis.h>

namespace event {

class Store final:
	public EventBusSubscriber::Listener,
	public EventStore::Service {
public:
	static const char * FMT_RANGE;
	static const char * FMT_ADD;

	explicit Store(const char * redis_ip);
	virtual ~Store();

	void add_event(common::Event & evt);
	void on_receive(const char * msg) override;
	grpc::Status get_events(grpc::ServerContext* context, const common::Uuid* request, grpc::ServerWriter<common::Event>* writer) override;
private:
	redisContext * m_context;

	std::string to_str(const common::Uuid & uuid);


};

}

#endif /* STORE_H_ */
