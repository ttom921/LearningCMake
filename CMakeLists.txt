cmake_minimum_required(VERSION 3.9.2)

project(LearningCMake)

add_executable(HelloWorld main.cpp)

install( TARGETS HelloWorld DESTINATION bin)