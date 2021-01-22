cmake_minimum_required(VERSION 3.16)
project(kudo)

# define a macro loopPrint
macro(loopPrint items)
    # 传入list的时候${items}只等于第一个
    # ${ARGV}==整个list
    # ${ARGN}==整个list - ${items}
    #    message(${items})
    #    message(${ARGV})
    #    message(${ARGN})
    foreach(item ${ARGV})
        message(--------${item})
    endforeach(item)
endmacro(loopPrint)

add_subdirectory(Test)

set(CMAKE_CXX_STANDARD 11)

add_executable(kudo main.cpp)