project(hello-world)
cmake_minimum_required(VERSION 3.16)

# get access to the targets declared in 'fmt':
add_subdirectory(external/fmt)

# create a shared library for adding:
add_library(adder SHARED src/adder_library.cpp)

# build an executable we can run, and link it to fmt and our adder library:
add_executable(hello src/hello.cpp)
target_link_libraries(hello PRIVATE fmt adder)