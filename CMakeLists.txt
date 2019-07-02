cmake_minimum_required(VERSION 3.8)
set (CMAKE_CXX_STANDARD 14)
project(reverse-polish-notation)

set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)

set(SOURCE src/main.cpp)
SET(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "/usr/local/boost_1_70_0")
SET(CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} "/usr/local/boost_1_70_0")

FIND_PACKAGE(Boost)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  add_executable(${PROJECT_NAME} ${SOURCE})
  target_link_libraries(${PROJECT_NAME} ${Boost_THREAD_LIBRARY} ${Boost_REGEX_LIBRARY} ${Boost_SYSTEM_LIBRARY})
endif()
