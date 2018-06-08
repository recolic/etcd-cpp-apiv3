#ifndef __ASYNC_DELETERESPONSE_HPP__
#define __ASYNC_DELETERESPONSE_HPP__

#include <grpc++/grpc++.h>
#include "etcd/proto/rpc.grpc.pb.h"
#include "V3Response.hpp"
#include "Action.hpp"


using grpc::ClientAsyncResponseReader;
using etcdserverpb::DeleteRangeResponse;

namespace etcdv3
{
  class AsyncDeleteRangeResponse : public etcdv3::V3Response
  {
    public:
      AsyncDeleteRangeResponse(){};
      void ParseResponse(std::string const& key, bool prefix, DeleteRangeResponse& resp);
  };
}

#endif
