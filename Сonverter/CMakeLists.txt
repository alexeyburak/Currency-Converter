cmake_minimum_required(VERSION 3.21)
project(onverter)

set(CMAKE_CXX_STANDARD 14)

add_executable(onverter main.cpp exchangeСalculation.h exchangeСalculation.cpp converterTextFiles.h converterTextFiles.cpp " mainLogicOfConverter.h" mainLogicOfConverter.cpp workWithFiles.h workWithFiles.cpp)
