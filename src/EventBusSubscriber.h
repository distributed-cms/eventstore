#include <zmq.hpp>
#include <memory>

namespace event {

class EventBusSubscriber {

public:
	class Listener {
	public:
		virtual void on_receive(const char * msg) = 0;
		virtual ~Listener() = default;
	};


	EventBusSubscriber(const char * url, Listener * listener);
	virtual ~EventBusSubscriber();

	/**
	 * listening in a loop until object is destroyed
	 * */
	void listen();

private:
	const char * m_url;
	zmq::context_t m_context;
	zmq::socket_t m_subscriber;
	Listener * m_listener;

};

}
