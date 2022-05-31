cmake_minimum_required(VERSION 3.21)
project(semafory C)

set(CMAKE_C_STANDARD 99)

add_executable(semafory main.c)

target_link_libraries(semafory m)