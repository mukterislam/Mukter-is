cmake_minimum_required(VERSION 3.10.2)
project("penguin")

add_library(penguin SHARED penguin.cpp)

find_library(log-lib log)
target_link_libraries(penguin ${log-lib})
