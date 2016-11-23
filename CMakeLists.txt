cmake_minimum_required(VERSION 3.6)
project(Reviiyot)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    Card.cpp
    Card.h
    Deck.cpp
    Deck.h
    Game.h
    Hand.cpp
    Hand.h
    List.cpp
    List.h
    Player.h
    reviiyot.cpp)

add_executable(Reviiyot ${SOURCE_FILES})