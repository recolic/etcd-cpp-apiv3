#ifndef __ASYNC_WATCH_HPP__
#define __ASYNC_WATCH_HPP__

#include <grpc++/grpc++.h>
#include "etcd/proto/rpc.grpc.pb.h"
#include "etcd/proto/rpc.pb.h"
#include "V3Response.hpp"


using etcdserverpb::WatchRequest;
using etcdserverpb::WatchResponse;
using etcdserverpb::KV;

namespace etcdv3
{
  class AsyncWatchResponse : public etcdv3::V3Response
  {
    public:
      AsyncWatchResponse(){};
      void ParseResponse(WatchResponse& resp);
  };
}

#endif

