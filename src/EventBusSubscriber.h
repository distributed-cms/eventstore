

#include <zmq.hpp>
#include <memory>

namespace event {

class EventBusSubscriber
{
  class Listener {
	public:
    		virtual void on_receive(const char * msg) = 0 ;
    		virtual ~Listener() = default;
  };
private:
  const char * m_url;
  zmq::context_t m_context;
  zmq::socket_t m_subscriber;
  Listener * m_listener;

  void listen();

public:
  EventBusSubscriber(const char * url, Listener * listener);
  virtual ~EventBusSubscriber();


};

}
