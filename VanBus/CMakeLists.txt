cmake_minimum_required(VERSION 3.14)

project(VanBus LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core SerialPort REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core SerialPort REQUIRED)

#add_executable(VanBus
set( VanBus_SOURCES
  vanbus.h vanbus.cpp
  vaninterpreter.cpp vaninterpreter.h
  MultimediaInfo/steeringcontrol.h MultimediaInfo/steeringcontrol.cpp
  CarStatistics/oil.h CarStatistics/oil.cpp
  CarStatistics/acinfo.h CarStatistics/acinfo.cpp
  CarStatistics/economyinfo.h CarStatistics/economyinfo.cpp
  CarStatistics/vehicleinfo.h CarStatistics/vehicleinfo.cpp
)
add_library( VanBus ${VanBus_SOURCES} )
target_link_libraries(VanBus Qt${QT_VERSION_MAJOR}::Core Qt::SerialPort)


