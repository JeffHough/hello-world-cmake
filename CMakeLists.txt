project(hello-world)
cmake_minimum_required(VERSION 3.16)

include(ExternalProject)

add_executable(hello src/hello.cpp)
add_subdirectory(external/fmt)

target_link_libraries(hello PRIVATE fmt)
