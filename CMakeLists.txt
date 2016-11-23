cmake_minimum_required(VERSION 3.6)
project(Reviiyot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES reviiyot.cpp Card.cpp Deck.cpp Hand.cpp List.h List.cpp)
add_executable(Reviiyot ${SOURCE_FILES})