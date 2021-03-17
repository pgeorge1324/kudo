cmake_minimum_required(VERSION 3.14)
project(test)
message(---- ${PROJECT_NAME})

file(GLOB_RECURSE SRCS ./*.cc)

loopPrint(${SRCS})

add_executable(${PROJECT_NAME} ${SRCS} test.cpp)

target_link_libraries(${PROJECT_NAME} gtest)

#add_test(NAME ${PROJECT_NAME}
#        COMMAND ${PROJECT_NAME})

message(---- [END]${PROJECT_NAME})