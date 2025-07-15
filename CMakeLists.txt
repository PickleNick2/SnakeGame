cmake_minimum_required(VERSION 3.20)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR "C:/SFML-3.0.0/lib/cmake/SFML")

find_package(SFML COMPONENTS Graphics Window System REQUIRED)

add_executable(Snake src/main.cpp)
target_link_libraries(Snake SFML::Graphics SFML::Window SFML::System)
