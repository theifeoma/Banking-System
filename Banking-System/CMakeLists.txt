cmake_minimum_required(VERSION 3.24)
project(helloworld)

set(CMAKE_CXX_STANDARD 20)

add_executable(helloworld main.cpp savingsAccount.cpp savingsAccount.h controller.cpp controller.h menu.h menu.cpp)
