cmake_minimum_required (VERSION 3.1.3 FATAL_ERROR)
project (etcd-cpp-api)

find_package(Boost REQUIRED COMPONENTS system thread locale random)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 11)

set (etcd-cpp-api_VERSION_MAJOR 0)
set (etcd-cpp-api_VERSION_MINOR 1)

enable_testing()
include_directories(SYSTEM ${CPPREST_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
#include_directories(./include)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wpedantic")

add_subdirectory(src)
add_subdirectory(tst)
