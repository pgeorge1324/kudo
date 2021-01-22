cmake_minimum_required(VERSION 3.14)
project(gtest)

message(---- ${PROJECT_NAME})

SET(GTEST_ROOT_DIR ./lib)

INCLUDE_DIRECTORIES(${GTEST_ROOT_DIR} ${GTEST_ROOT_DIR}/include)

# add_library(<name> [STATIC | SHARED | MODULE]
#            [EXCLUDE_FROM_ALL]
#            [source1] [source2] [...])
# STATIC、SHARED和MODULE的作用是指定生成的库文件的类型
# STATIC库是目标文件的归档文件，在链接其它目标的时候使用。
# SHARED库会被动态链接（动态链接库），在运行时会被加载。
# MODULE库是一种不会被链接到其它目标中的插件，但是可能会在运行时使用dlopen-系列的函数。
# 默认状态下，库文件将会在于源文件目录树的构建目录树的位置被创建，该命令也会在这里被调用。
ADD_LIBRARY(${PROJECT_NAME} STATIC ${GTEST_ROOT_DIR}/src/gtest-all.cc )


#TARGET_LINK_LIBRARIES(gtest)

# Specify here the include directories exported
# by this library
# message(${PROJECT_SOURCE_DIR}/include)
# 声明当前库包含哪些头文件
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib/include)

message(---- [END]${PROJECT_NAME})
