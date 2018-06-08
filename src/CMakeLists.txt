include_directories(../include)
file(GLOB_RECURSE SRC_FILES ./*)
add_library(etcd-cpp-api SHARED ${SRC_FILES})
set_property(TARGET etcd-cpp-api PROPERTY CXX_STANDARD 11)

target_link_libraries(etcd-cpp-api cpprest boost_system ssl crypto protobuf grpc++)

install (TARGETS etcd-cpp-api DESTINATION lib)
install (DIRECTORY ../include/etcd DESTINATION include)

