cmake_minimum_required(VERSION 3.20)
project(simple_error VERSION 1.0.0 DESCRIPTION "C++ Module for a struct that be can be used with std::unexpected.")

include(GNUInstallDirs)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(simple_error INTERFACE)

target_include_directories(simple_error INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/error.ixx DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
