#CMAKE_SOURCE_DIR, 主目录地址
#PROJECT_SOURCE_DIR , 当前目录地址, 如果cmakelist里未写子目录就是子makefile，那么当前目录地址就是著目录地址
# PROJECT_BINARY_DIR：当前工程的编译输出目录
project(tc_sign)
cmake_minimum_required(VERSION 3.1)
SET(CMAKE_CXX_STANDARD c++17)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread -DPCCTS_USE_NAMESPACE_STD \ -Wno-unused-variable -Wno-unused-parameter -Wno-missing-field-initializers --target=aarch64-linux-android31") 
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread -DPCCTS_USE_NAMESPACE_STD \ -Wno-unused-variable -Wno-unused-parameter -Wno-missing-field-initializers --target=aarch64-linux-android31")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")

add_executable(bm24.out ../bm24.c)

add_library(stack SHARED ../../../mylib/stack/stack.c)

include_directories(${PROJECT_SOURCE_DIR}/../../../mylib/stack/)

link_directories(${PROJECT_SOURCE_DIR}/../../../mylib/stack/)

target_link_libraries(bm24.out stack) 
