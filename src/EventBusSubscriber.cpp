

#include <iostream>
#include <sstream>
#include <zmq.hpp>
#include "EventBusSubscriber.h"

EventBusSubscriber::EventBusSubscriber(const char * url): m_url(url), m_context(0), m_subscriber(m_context, ZMQ_SUB)
{
  m_subscriber.setsockopt(ZMQ_SUBSCRIBE, "", 0);
  m_subscriber.connect(m_url);
}

void EventBusSubscriber::listen(Listener * listener)
{
	while(true)
	{
		zmq::message_t update;
    		m_subscriber.recv(&update);
    		listener->on_receive(static_cast<char*>(update.data()));
	}
}

