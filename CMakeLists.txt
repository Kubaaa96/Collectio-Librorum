cmake_minimum_required(VERSION 3.16.0 FATAL_ERROR)
project(CollectioLibrorum VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(QT_HOME CACHE PATH "Location of QT6 compiler directory for example ,, Qt/6.0.0/msvc2019_64")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message(STATUS "Looking for Qt in: " ${QT_HOME})

set(Qt6_DIR ${QT_HOME}/lib/cmake/Qt6)
set(Qt6CoreTools_DIR ${QT_HOME}/lib/cmake/Qt6CoreTools)
set(Qt6GuiTools_DIR ${QT_HOME}/lib/cmake/Qt6GuiTools)
set(Qt6WidgetsTools_DIR ${QT_HOME}/lib/cmake/Qt6WidgetsTools)

message(STATUS "Looking for Qt Tools in: \n\t" ${Qt6CoreTools_DIR} "\n\t" ${Qt6GuiTools_DIR} "\n\t" ${Qt6WidgetsTools_DIR})

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_subdirectory(src)

target_link_libraries(${PROJECT_NAME} 
    PUBLIC
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets)