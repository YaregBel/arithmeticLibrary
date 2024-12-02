cmake_minimum_required(VERSION 3.31)

project(arithmeticLibrary VERSION 0.0.1)

# Устанавливаем стандард, который будет использоваться по умолчанию,
# а также устанавливаем минимально необходимую версию.
# Устанавливаем каталог вывода для исполняемых файлов и библиотек.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

# Находим все С++ файлы в директории /src
file(GLOB_RECURSE SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(run ${SOURCE_FILES})
