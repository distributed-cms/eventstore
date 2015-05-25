#include <iostream>
#include <memory>
#include <string>

#include <grpc/grpc.h>

//#include "EventBusSubscriber.h"
#include "Store.h"

using namespace std;
using namespace event;

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


	grpc_shutdown();

	return 0;
}
