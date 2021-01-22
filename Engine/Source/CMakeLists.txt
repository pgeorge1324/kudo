cmake_minimum_required(VERSION 3.14)
project(source)
message(---- ${PROJECT_NAME})

set(
        SOURCE_CODE_DIRS
        Render
)

foreach(folder ${SOURCE_CODE_DIRS})
    include_directories(${folder})
    # 查找当前目录下的所有源文件
    # 并将名称保存到 DIR_LIB_SRCS 变量
    aux_source_directory(${folder} DIR_LIB_SRCS)
    #  message(${folder})
endforeach()

message(--------CPP--------)
loopPrint(${DIR_LIB_SRCS})
message(--------EXPORT HEADER--------)
loopPrint(${SOURCE_CODE_DIRS})

add_library(${PROJECT_NAME} STATIC ${DIR_LIB_SRCS})

# 将所有依赖的头文件包含在lib中，使用时不需要include
target_include_directories(${PROJECT_NAME} PUBLIC ${SOURCE_CODE_DIRS})

message(---- [END]${PROJECT_NAME})