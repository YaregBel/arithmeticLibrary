cmake_minimum_required(VERSION 3.31)

project(arithmeticLibrary VERSION 0.0.1)

# Устанавливаем стандард, который будет использоваться по умолчанию,
# а также устанавливаем минимально необходимую версию.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_EXE src/main.cpp)
set(SOURCE_LIB src/dataStructures/Structs.cpp)
set(SOURCE_TEST src/Tests.cpp)

add_library(structs STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE} ${SOURCE_LIB} ${SOURCE_TEST})
