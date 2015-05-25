#include <iostream>
#include <memory>
#include <string>

#include <grpc/grpc.h>

#include "Store.h"
#include "ServerRunner.h"
#include "EventStoreImpl.h"

using namespace std;
using namespace event;
using namespace common;

constexpr int DEFAULT_PORT = 10001;

int get_port (int argc, char ** argv)
{
	return argc > 1 ? stoi(argv[1]) : DEFAULT_PORT;
}

string get_address(int argc, char ** argv)
{
	// TODO we can  set the host as configurable as parameter
	return string{"0.0.0.0:"} + to_string(get_port(argc, argv));
}

int main(int argc, char** argv)
{
	Store store{};
	EventBusSubscriber subscriber{"tcp://localhost:55551", &store};
	const string address = get_address(argc, argv);

	grpc_init();
	EventStoreImpl event_store_service {};
	ServerRunner server_runner{get_address(argc, argv) , {&event_store_service}};

	grpc_shutdown();

	return 0;
}
