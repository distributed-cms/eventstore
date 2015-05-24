project('eventstore', 'cpp')
add_global_arguments('-std=c++14', language : 'cpp')

#Dependencies
LIBRARIES = [find_library('zmq'), find_library('grpc++'), find_library('grpc'), find_library('gpr'), find_library('protobuf'), find_library('pthread'), find_library('dl')]

#Executables
executable('eventstore', 'main.cpp', 'EventBusSubscriber.cpp', dependencies : LIBRARIES)


# Build protocol buffers files
run_target('protogen', 'protos/build.proto.sh', 'protos', 'content.proto', '.')
