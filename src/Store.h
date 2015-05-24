/*
 * Store.h
 *
 *  Created on: 24 de may. de 2015
 *      Author: carlos
 */

#ifndef STORE_H_
#define STORE_H_

#include "EventBusSubscriber.h"
#include <vector>

namespace event {

class Store : public EventBusSubscriber::Listener{
public:
	Store();
	virtual ~Store() = default;

	virtual void on_receive(const char * msg) ;

	// TODO use Uuid class
	virtual std::vector<const char *>  get_events(const char * uuid);

};

}

#endif /* STORE_H_ */
