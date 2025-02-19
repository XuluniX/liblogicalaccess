// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: iks.proto

#include "iks.pb.h"
#include "iks.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* IKSService_method_names[] = {
  "/IKSService/GenRandom",
  "/IKSService/AESEncrypt",
  "/IKSService/AESDecrypt",
  "/IKSService/DESFireISOAuth1",
  "/IKSService/DESFireISOAuth2",
  "/IKSService/DESFireAESAuth1",
  "/IKSService/DESFireAESAuth2",
  "/IKSService/DESFireChangeKey",
};

std::unique_ptr< IKSService::Stub> IKSService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< IKSService::Stub> stub(new IKSService::Stub(channel, options));
  return stub;
}

IKSService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GenRandom_(IKSService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AESEncrypt_(IKSService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AESDecrypt_(IKSService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireISOAuth1_(IKSService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireISOAuth2_(IKSService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireAESAuth1_(IKSService_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireAESAuth2_(IKSService_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DESFireChangeKey_(IKSService_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status IKSService::Stub::GenRandom(::grpc::ClientContext* context, const ::CMSG_GenRandom& request, ::SMSG_GenRandom* response) {
  return ::grpc::internal::BlockingUnaryCall< ::CMSG_GenRandom, ::SMSG_GenRandom, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GenRandom_, context, request, response);
}

void IKSService::Stub::async::GenRandom(::grpc::ClientContext* context, const ::CMSG_GenRandom* request, ::SMSG_GenRandom* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::CMSG_GenRandom, ::SMSG_GenRandom, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GenRandom_, context, request, response, std::move(f));
}

void IKSService::Stub::async::GenRandom(::grpc::ClientContext* context, const ::CMSG_GenRandom* request, ::SMSG_GenRandom* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GenRandom_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::SMSG_GenRandom>* IKSService::Stub::PrepareAsyncGenRandomRaw(::grpc::ClientContext* context, const ::CMSG_GenRandom& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::SMSG_GenRandom, ::CMSG_GenRandom, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GenRandom_, context, request);
}

::grpc::ClientAsyncResponseReader< ::SMSG_GenRandom>* IKSService::Stub::AsyncGenRandomRaw(::grpc::ClientContext* context, const ::CMSG_GenRandom& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGenRandomRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IKSService::Stub::AESEncrypt(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::SMSG_AESResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::CMSG_AESOperation, ::SMSG_AESResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AESEncrypt_, context, request, response);
}

void IKSService::Stub::async::AESEncrypt(::grpc::ClientContext* context, const ::CMSG_AESOperation* request, ::SMSG_AESResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::CMSG_AESOperation, ::SMSG_AESResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AESEncrypt_, context, request, response, std::move(f));
}

void IKSService::Stub::async::AESEncrypt(::grpc::ClientContext* context, const ::CMSG_AESOperation* request, ::SMSG_AESResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AESEncrypt_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::SMSG_AESResult>* IKSService::Stub::PrepareAsyncAESEncryptRaw(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::SMSG_AESResult, ::CMSG_AESOperation, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AESEncrypt_, context, request);
}

::grpc::ClientAsyncResponseReader< ::SMSG_AESResult>* IKSService::Stub::AsyncAESEncryptRaw(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAESEncryptRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IKSService::Stub::AESDecrypt(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::SMSG_AESResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::CMSG_AESOperation, ::SMSG_AESResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AESDecrypt_, context, request, response);
}

void IKSService::Stub::async::AESDecrypt(::grpc::ClientContext* context, const ::CMSG_AESOperation* request, ::SMSG_AESResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::CMSG_AESOperation, ::SMSG_AESResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AESDecrypt_, context, request, response, std::move(f));
}

void IKSService::Stub::async::AESDecrypt(::grpc::ClientContext* context, const ::CMSG_AESOperation* request, ::SMSG_AESResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AESDecrypt_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::SMSG_AESResult>* IKSService::Stub::PrepareAsyncAESDecryptRaw(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::SMSG_AESResult, ::CMSG_AESOperation, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AESDecrypt_, context, request);
}

::grpc::ClientAsyncResponseReader< ::SMSG_AESResult>* IKSService::Stub::AsyncAESDecryptRaw(::grpc::ClientContext* context, const ::CMSG_AESOperation& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAESDecryptRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IKSService::Stub::DESFireISOAuth1(::grpc::ClientContext* context, const ::CMSG_DesfireISOAuth_Step1& request, ::SMSG_DesfireISOAuth_Step1* response) {
  return ::grpc::internal::BlockingUnaryCall< ::CMSG_DesfireISOAuth_Step1, ::SMSG_DesfireISOAuth_Step1, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DESFireISOAuth1_, context, request, response);
}

void IKSService::Stub::async::DESFireISOAuth1(::grpc::ClientContext* context, const ::CMSG_DesfireISOAuth_Step1* request, ::SMSG_DesfireISOAuth_Step1* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::CMSG_DesfireISOAuth_Step1, ::SMSG_DesfireISOAuth_Step1, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireISOAuth1_, context, request, response, std::move(f));
}

void IKSService::Stub::async::DESFireISOAuth1(::grpc::ClientContext* context, const ::CMSG_DesfireISOAuth_Step1* request, ::SMSG_DesfireISOAuth_Step1* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireISOAuth1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireISOAuth_Step1>* IKSService::Stub::PrepareAsyncDESFireISOAuth1Raw(::grpc::ClientContext* context, const ::CMSG_DesfireISOAuth_Step1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::SMSG_DesfireISOAuth_Step1, ::CMSG_DesfireISOAuth_Step1, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DESFireISOAuth1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireISOAuth_Step1>* IKSService::Stub::AsyncDESFireISOAuth1Raw(::grpc::ClientContext* context, const ::CMSG_DesfireISOAuth_Step1& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDESFireISOAuth1Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IKSService::Stub::DESFireISOAuth2(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::SMSG_DesfireAuth_Step2* response) {
  return ::grpc::internal::BlockingUnaryCall< ::CMSG_DesfireAuth_Step2, ::SMSG_DesfireAuth_Step2, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DESFireISOAuth2_, context, request, response);
}

void IKSService::Stub::async::DESFireISOAuth2(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2* request, ::SMSG_DesfireAuth_Step2* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::CMSG_DesfireAuth_Step2, ::SMSG_DesfireAuth_Step2, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireISOAuth2_, context, request, response, std::move(f));
}

void IKSService::Stub::async::DESFireISOAuth2(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2* request, ::SMSG_DesfireAuth_Step2* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireISOAuth2_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAuth_Step2>* IKSService::Stub::PrepareAsyncDESFireISOAuth2Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::SMSG_DesfireAuth_Step2, ::CMSG_DesfireAuth_Step2, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DESFireISOAuth2_, context, request);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAuth_Step2>* IKSService::Stub::AsyncDESFireISOAuth2Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDESFireISOAuth2Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IKSService::Stub::DESFireAESAuth1(::grpc::ClientContext* context, const ::CMSG_DesfireAESAuth_Step1& request, ::SMSG_DesfireAESAuth_Step1* response) {
  return ::grpc::internal::BlockingUnaryCall< ::CMSG_DesfireAESAuth_Step1, ::SMSG_DesfireAESAuth_Step1, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DESFireAESAuth1_, context, request, response);
}

void IKSService::Stub::async::DESFireAESAuth1(::grpc::ClientContext* context, const ::CMSG_DesfireAESAuth_Step1* request, ::SMSG_DesfireAESAuth_Step1* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::CMSG_DesfireAESAuth_Step1, ::SMSG_DesfireAESAuth_Step1, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireAESAuth1_, context, request, response, std::move(f));
}

void IKSService::Stub::async::DESFireAESAuth1(::grpc::ClientContext* context, const ::CMSG_DesfireAESAuth_Step1* request, ::SMSG_DesfireAESAuth_Step1* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireAESAuth1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAESAuth_Step1>* IKSService::Stub::PrepareAsyncDESFireAESAuth1Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAESAuth_Step1& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::SMSG_DesfireAESAuth_Step1, ::CMSG_DesfireAESAuth_Step1, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DESFireAESAuth1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAESAuth_Step1>* IKSService::Stub::AsyncDESFireAESAuth1Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAESAuth_Step1& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDESFireAESAuth1Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IKSService::Stub::DESFireAESAuth2(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::SMSG_DesfireAuth_Step2* response) {
  return ::grpc::internal::BlockingUnaryCall< ::CMSG_DesfireAuth_Step2, ::SMSG_DesfireAuth_Step2, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DESFireAESAuth2_, context, request, response);
}

void IKSService::Stub::async::DESFireAESAuth2(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2* request, ::SMSG_DesfireAuth_Step2* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::CMSG_DesfireAuth_Step2, ::SMSG_DesfireAuth_Step2, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireAESAuth2_, context, request, response, std::move(f));
}

void IKSService::Stub::async::DESFireAESAuth2(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2* request, ::SMSG_DesfireAuth_Step2* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireAESAuth2_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAuth_Step2>* IKSService::Stub::PrepareAsyncDESFireAESAuth2Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::SMSG_DesfireAuth_Step2, ::CMSG_DesfireAuth_Step2, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DESFireAESAuth2_, context, request);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireAuth_Step2>* IKSService::Stub::AsyncDESFireAESAuth2Raw(::grpc::ClientContext* context, const ::CMSG_DesfireAuth_Step2& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDESFireAESAuth2Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status IKSService::Stub::DESFireChangeKey(::grpc::ClientContext* context, const ::CMSG_DesfireChangeKey& request, ::SMSG_DesfireChangeKey* response) {
  return ::grpc::internal::BlockingUnaryCall< ::CMSG_DesfireChangeKey, ::SMSG_DesfireChangeKey, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DESFireChangeKey_, context, request, response);
}

void IKSService::Stub::async::DESFireChangeKey(::grpc::ClientContext* context, const ::CMSG_DesfireChangeKey* request, ::SMSG_DesfireChangeKey* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::CMSG_DesfireChangeKey, ::SMSG_DesfireChangeKey, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireChangeKey_, context, request, response, std::move(f));
}

void IKSService::Stub::async::DESFireChangeKey(::grpc::ClientContext* context, const ::CMSG_DesfireChangeKey* request, ::SMSG_DesfireChangeKey* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DESFireChangeKey_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireChangeKey>* IKSService::Stub::PrepareAsyncDESFireChangeKeyRaw(::grpc::ClientContext* context, const ::CMSG_DesfireChangeKey& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::SMSG_DesfireChangeKey, ::CMSG_DesfireChangeKey, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DESFireChangeKey_, context, request);
}

::grpc::ClientAsyncResponseReader< ::SMSG_DesfireChangeKey>* IKSService::Stub::AsyncDESFireChangeKeyRaw(::grpc::ClientContext* context, const ::CMSG_DesfireChangeKey& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDESFireChangeKeyRaw(context, request, cq);
  result->StartCall();
  return result;
}

IKSService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_GenRandom, ::SMSG_GenRandom, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IKSService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CMSG_GenRandom* req,
             ::SMSG_GenRandom* resp) {
               return service->GenRandom(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_AESOperation, ::SMSG_AESResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IKSService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CMSG_AESOperation* req,
             ::SMSG_AESResult* resp) {
               return service->AESEncrypt(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_AESOperation, ::SMSG_AESResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IKSService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CMSG_AESOperation* req,
             ::SMSG_AESResult* resp) {
               return service->AESDecrypt(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireISOAuth_Step1, ::SMSG_DesfireISOAuth_Step1, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IKSService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CMSG_DesfireISOAuth_Step1* req,
             ::SMSG_DesfireISOAuth_Step1* resp) {
               return service->DESFireISOAuth1(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireAuth_Step2, ::SMSG_DesfireAuth_Step2, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IKSService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CMSG_DesfireAuth_Step2* req,
             ::SMSG_DesfireAuth_Step2* resp) {
               return service->DESFireISOAuth2(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireAESAuth_Step1, ::SMSG_DesfireAESAuth_Step1, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IKSService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CMSG_DesfireAESAuth_Step1* req,
             ::SMSG_DesfireAESAuth_Step1* resp) {
               return service->DESFireAESAuth1(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireAuth_Step2, ::SMSG_DesfireAuth_Step2, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IKSService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CMSG_DesfireAuth_Step2* req,
             ::SMSG_DesfireAuth_Step2* resp) {
               return service->DESFireAESAuth2(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      IKSService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< IKSService::Service, ::CMSG_DesfireChangeKey, ::SMSG_DesfireChangeKey, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](IKSService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::CMSG_DesfireChangeKey* req,
             ::SMSG_DesfireChangeKey* resp) {
               return service->DESFireChangeKey(ctx, req, resp);
             }, this)));
}

IKSService::Service::~Service() {
}

::grpc::Status IKSService::Service::GenRandom(::grpc::ServerContext* context, const ::CMSG_GenRandom* request, ::SMSG_GenRandom* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::AESEncrypt(::grpc::ServerContext* context, const ::CMSG_AESOperation* request, ::SMSG_AESResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::AESDecrypt(::grpc::ServerContext* context, const ::CMSG_AESOperation* request, ::SMSG_AESResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireISOAuth1(::grpc::ServerContext* context, const ::CMSG_DesfireISOAuth_Step1* request, ::SMSG_DesfireISOAuth_Step1* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireISOAuth2(::grpc::ServerContext* context, const ::CMSG_DesfireAuth_Step2* request, ::SMSG_DesfireAuth_Step2* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireAESAuth1(::grpc::ServerContext* context, const ::CMSG_DesfireAESAuth_Step1* request, ::SMSG_DesfireAESAuth_Step1* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireAESAuth2(::grpc::ServerContext* context, const ::CMSG_DesfireAuth_Step2* request, ::SMSG_DesfireAuth_Step2* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status IKSService::Service::DESFireChangeKey(::grpc::ServerContext* context, const ::CMSG_DesfireChangeKey* request, ::SMSG_DesfireChangeKey* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


