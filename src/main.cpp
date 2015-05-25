#include <iostream>
#include <memory>
#include <string>
#include <thread>

#include <grpc/grpc.h>

#include "Store.h"
#include "ServerRunner.h"
#include "EventStoreImpl.h"

using namespace std;
using namespace event;
using namespace common;

constexpr int BASE_PORT = 60000;
const char * BASE_URL_SUB = "tcp://localhost:";
const char * BASE_URL_REQ = "0.0.0.0:";


int get_port(int argc, char ** argv, int port_position) {
	return argc > port_position ?
			atoi(argv[port_position]) : BASE_PORT + port_position;
}

string get_url(const char * base_url, unsigned port) {
	return base_url + to_string(port);
}

int main(int argc, char** argv)
{
	const string subs_url = get_url(BASE_URL_SUB, get_port(argc, argv, 1));
	const string reqs_url = get_url(BASE_URL_REQ, get_port(argc, argv, 2));

	Store store{};
	EventBusSubscriber subscriber{subs_url.c_str(), &store};
	thread th_subscriber {&EventBusSubscriber::listen, &subscriber};
	cout << "listening sub: " << subs_url << endl;

	grpc_init();
	EventStoreImpl event_store_service {};
	ServerRunner server_runner{reqs_url , {&event_store_service}};
	grpc_shutdown();

	th_subscriber.join();

	return 0;
}
