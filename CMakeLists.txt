cmake_minimum_required(VERSION 3.0.0)
project(bird_data VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(bird_data_handler src/main.cpp src/config/option_map.cpp src/config/config.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
