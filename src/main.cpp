#include <iostream>
#include <memory>
#include <string>

#include <grpc/grpc.h>

#include "EventBusSubscriber.h"

using namespace std;

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
	EventBusSubscriber subscriber;
	const string address = get_address(argc, argv);

	grpc_init();


	grpc_shutdown();

	return 0;
}
