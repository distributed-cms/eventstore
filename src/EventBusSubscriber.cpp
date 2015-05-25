
#include <iostream>
#include <sstream>
#include <zmq.hpp>
#include "EventBusSubscriber.h"

namespace event {

EventBusSubscriber::EventBusSubscriber(const char * url, Listener * listener) :
		m_url(url), m_context(1), m_subscriber(m_context, ZMQ_SUB), m_listener(listener){
	std::cout << "initializing subscriber at " << m_url << std::endl;
	m_subscriber.setsockopt(ZMQ_SUBSCRIBE, "", 0);
	std::cout << "setting subscription filter" << std::endl;
	m_subscriber.connect(m_url);
	std::cout << "connected" << std::endl;
	listen();
	std::cout << "listening" << std::endl;
}

EventBusSubscriber::~EventBusSubscriber(){
	m_subscriber.close();
	m_listener = nullptr;
}


void EventBusSubscriber::listen() {
	while (m_listener != nullptr){
		zmq::message_t update;
		if (m_subscriber.recv(&update) && m_listener != nullptr) {
			m_listener->on_receive(static_cast<char*>(update.data()));
		}
	}
}

}
