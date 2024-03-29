#
# Copyright (C) 2020-2022 QuasarApp.
# Distributed under the lgplv3 software license, see the accompanying
# Everyone is permitted to copy and distribute verbatim copies
# of this license document, but changing it is not allowed.
#

cmake_minimum_required(VERSION 3.14)
project(CQtServer)
if(TARGET ${PROJECT_NAME})
  message("The ${PROJECT_NAME} arledy included in main Project")
  return()
endif()

set (QT_VERSION_MAJOR OFF)
set (BUILD_SHARED_LIBS ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Test QUIET)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Test QUIET)

include(Heart/QuasarAppLib/CMake/ccache.cmake)
include(Heart/QuasarAppLib/CMake/QuasarAppCITargets.cmake)

# Add sub directories
set(HEART_BUILD_LVL 0)
add_subdirectory(Heart)
add_subdirectory(src)
if (${QT_VERSION_MAJOR})
    add_subdirectory(tests)
endif()


initAll()

