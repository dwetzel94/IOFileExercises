cmake_minimum_required(VERSION 2.6)
project(iofileexercise)

add_executable(iofileexercise main.cpp)

install(TARGETS iofileexercise RUNTIME DESTINATION bin)
