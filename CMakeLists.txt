cmake_minimum_required(VERSION 3.10)

project(cacl)

set(SOURCES div.cpp;add.cpp;main.cpp;mult.cpp;sub.cpp)

set(CMAKE_CXX_STANDARD 14)

#set{path /usr/local/include}

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY .)

add_executable(cacl ${SOURCES})
