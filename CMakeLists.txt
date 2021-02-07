cmake_minimum_required(VERSION 3.0.0)
project(doxygen-gh-pages)

# Generate documentation using Doxygen (optional).
add_subdirectory(doc)

# Build some C++ code.
add_library(foobar src/foobar.cpp)
add_executable(greetings src/greetings.cpp)
target_link_libraries(greetings foobar)
