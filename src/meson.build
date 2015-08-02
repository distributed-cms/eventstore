project('eventstore', 'cpp')
add_global_arguments('-std=c++14', language : 'cpp')

#Dependencies
LIBRARIES = [find_library('hiredis'), find_library('zmq'), find_library('grpc++'), find_library('grpc'), find_library('gpr'), find_library('protobuf'), find_library('pthread'), find_library('dl')]

#Executables
executable('eventstore', 'main.cpp', 'EventBusSubscriber.cpp', 'ServerRunner.cpp', 'Store.cpp', 'eventstore.grpc.pb.cc', 'eventstore.pb.cc','base.grpc.pb.cc', 'base.pb.cc', dependencies : LIBRARIES)
