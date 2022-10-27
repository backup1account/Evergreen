cmake_minimum_required(VERSION 3.0.0)
project(Evergreen VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_INCLUDE_DIR C:/SFML-2.5.1/include)
set(SFML_LIBRARY_DIR C:/SFML-2.5.1/lib)
set(SFML_DIR C:/SFML-2.5.1/lib/cmake/SFML)

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window network graphics audio REQUIRED)

include(CTest)
enable_testing()

add_executable(Evergreen main.cpp)

target_link_libraries (Evergreen sfml-graphics sfml-window sfml-system)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)