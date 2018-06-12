include_directories(../include)
set(API_SRC_FILES ./v3/AsyncDeleteAction.cpp ./v3/AsyncLeaseGrantResponse.cpp ./v3/AsyncTxnResponse.cpp ./v3/AsyncSetAction.cpp ./v3/AsyncWatchAction.cpp ./v3/AsyncCompareAndDeleteAction.cpp ./v3/V3Response.cpp ./v3/action_constants.cpp ./v3/AsyncRangeResponse.cpp ./v3/AsyncGetAction.cpp ./v3/Action.cpp ./v3/AsyncDeleteRangeResponse.cpp ./v3/KeyValue.cpp ./v3/AsyncUpdateAction.cpp ./v3/AsyncWatchResponse.cpp ./v3/Transaction.cpp ./v3/AsyncCompareAndSwapAction.cpp ./v3/AsyncLeaseGrantAction.cpp ./Value.cpp ./Watcher.cpp ./Response.cpp ./Client.cpp ./SyncClient.cpp)
add_library(etcd-cpp-api STATIC ${API_SRC_FILES} proto/auth.pb.cc proto/rpc.grpc.pb.cc proto/etcdserver.pb.cc proto/rpc.pb.cc proto/kv.pb.cc)
set_property(TARGET etcd-cpp-api PROPERTY CXX_STANDARD 11)

target_link_libraries(etcd-cpp-api cpprest boost_system ssl crypto protobuf grpc++)

install (TARGETS etcd-cpp-api DESTINATION lib)
install (DIRECTORY ../include/etcd DESTINATION include)

