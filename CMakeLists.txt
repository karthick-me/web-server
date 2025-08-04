cmake_minimum_required(VERSION 3.10)
project(webserver C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror")

set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")

set(SOURCES
    ${SRC_DIR}/main.c
)

include_directories(
  
)

add_executable(webserver ${SOURCES})