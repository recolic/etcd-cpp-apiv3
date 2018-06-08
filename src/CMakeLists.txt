include_directories(../include)
file(GLOB_RECURSE SRC_FILES ./*)
add_library(etcd-cpp-api SHARED ${SRC_FILES})
set_property(TARGET etcd-cpp-api PROPERTY CXX_STANDARD 11)

target_link_libraries(etcd-cpp-api ${CPPREST_LIB} boost_system ssl crypto protobuf grpc++)

install (TARGETS etcd-cpp-api DESTINATION lib)
install (FILES ../include/etcd/* DESTINATION include/etcd)

