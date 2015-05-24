/*
 * Store.cpp
 *
 *  Created on: 24 de may. de 2015
 *      Author: carlos
 */

#include "Store.h"

namespace event {

Store::Store() {
	// TODO Auto-generated constructor stub

}

void Store::on_receive(const char * msg) {
	// TODO save the data
}

// TODO use Uuid class
std::vector<const char *> Store::get_events(const char * uuid){
	return {"aa", "bb"};
}

}
