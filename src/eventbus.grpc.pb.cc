// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: eventbus.proto

#include "eventbus.pb.h"
#include "eventbus.grpc.pb.h"

#include <grpc++/async_unary_call.h>
#include <grpc++/channel_interface.h>
#include <grpc++/impl/client_unary_call.h>
#include <grpc++/impl/rpc_service_method.h>
#include <grpc++/impl/service_type.h>
#include <grpc++/stream.h>
namespace event {

static const char* EventBus_method_names[] = {
  "/event.EventBus/publish",
};

std::unique_ptr< EventBus::Stub> EventBus::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel) {
  std::unique_ptr< EventBus::Stub> stub(new EventBus::Stub(channel));
  return stub;
}

EventBus::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : ::grpc::InternalStub(channel), rpcmethod_publish_(EventBus_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel->RegisterMethod(EventBus_method_names[0]))
  {}

::grpc::Status EventBus::Stub::publish(::grpc::ClientContext* context, const ::common::Event& request, ::common::ExecutionReport* response) {
  return ::grpc::BlockingUnaryCall(channel(), rpcmethod_publish_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::common::ExecutionReport>* EventBus::Stub::AsyncpublishRaw(::grpc::ClientContext* context, const ::common::Event& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::common::ExecutionReport>(channel(), cq, rpcmethod_publish_, context, request);
}

EventBus::AsyncService::AsyncService() : ::grpc::AsynchronousService(EventBus_method_names, 1) {}

EventBus::Service::~Service() {
  delete service_;
}

::grpc::Status EventBus::Service::publish(::grpc::ServerContext* context, const ::common::Event* request, ::common::ExecutionReport* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

void EventBus::AsyncService::Requestpublish(::grpc::ServerContext* context, ::common::Event* request, ::grpc::ServerAsyncResponseWriter< ::common::ExecutionReport>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
  AsynchronousService::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
}

::grpc::RpcService* EventBus::Service::service() {
  if (service_ != nullptr) {
    return service_;
  }
  service_ = new ::grpc::RpcService();
  service_->AddMethod(new ::grpc::RpcServiceMethod(
      EventBus_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< EventBus::Service, ::common::Event, ::common::ExecutionReport>(
          std::mem_fn(&EventBus::Service::publish), this)));
  return service_;
}


}  // namespace event

