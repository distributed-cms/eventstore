

#include <zmq.hpp>
#include <memory>

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

public:
  EventBusSubscriber(const char * url);
  virtual ~EventBusSubscriber() = default;

  void listen(Listener * listener);

};
