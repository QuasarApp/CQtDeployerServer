#
# Copyright (C) 2020-2021 QuasarApp.
# Distributed under the lgplv3 software license, see the accompanying
# Everyone is permitted to copy and distribute verbatim copies
# of this license document, but changing it is not allowed.
#

cmake_minimum_required(VERSION 3.14)



set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(../Heart/QuasarAppLib/CMake/ProjectOut.cmake)
include(../Heart/QuasarAppLib/CMake/Version.cmake)
include(../Heart/QuasarAppLib/CMake/tr.cmake)

add_subdirectory(Library)
add_subdirectory(Server)
