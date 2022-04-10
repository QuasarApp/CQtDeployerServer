#
# Copyright (C) 2020-2022 QuasarApp.
# Distributed under the lgplv3 software license, see the accompanying
# Everyone is permitted to copy and distribute verbatim copies
# of this license document, but changing it is not allowed.
#

cmake_minimum_required(VERSION 3.14)

add_definitions(-DCQTPROTOCKOL_LIBRARY)


find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

file(GLOB SOURCE_CPP
    "*.cpp" "*.qrc"
    "src/*.cpp" "src/*.qrc"
    "src/Private/*.cpp" "src/Private/*.qrc"
)

set(PUBLIC_INCUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(PUBLIC_INCUDE_DIR ${PUBLIC_INCUDE_DIR} "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(PRIVATE_INCUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/Private")


add_library(cqtProtockol ${SOURCE_CPP})

target_link_libraries(cqtProtockol PUBLIC Qt::Core Heart)

target_include_directories(cqtProtockol PUBLIC ${PUBLIC_INCUDE_DIR})
target_include_directories(cqtProtockol PRIVATE ${PRIVATE_INCUDE_DIR})

setVersionForTarget(cqtProtockol 0 0 1)

