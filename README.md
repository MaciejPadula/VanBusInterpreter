# VanBusInterpreter
VanBus Interpreter is a QT library that allows user to connect signals emited by for example buttons from steering wheel radio pilot.
# Usage
To use this library just copy VanBus folder to your project directory and add #include "VanBus.h" to your main file and include SerialPort library in your CMake or QMake file in Qt Creator. You will also have to add VanBus files to your make file:
```
VanBus/vanbus.h VanBus/vanbus.cpp
VanBus/vaninterpreter.cpp VanBus/vaninterpreter.h
VanBus/MultimediaInfo/steeringcontrol.h VanBus/MultimediaInfo/steeringcontrol.cpp
VanBus/CarStatistics/oil.h VanBus/CarStatistics/oil.cpp
VanBus/CarStatistics/acinfo.h VanBus/CarStatistics/acinfo.cpp
VanBus/CarStatistics/economyinfo.h VanBus/CarStatistics/economyinfo.cpp
VanBus/CarStatistics/vehicleinfo.h VanBus/CarStatistics/vehicleinfo.cpp
```
Then you have to create object of VanBus class: <br/>
``` C++
#include <QCoreApplication>
#include <VanBus/vanbus.h>
int main(int argc, char *argv[]){
  QCoreApplication a(argc, argv);
  
  VanBus vanBus("COM3"); // As object
  VanBus *vanBus = new VanBus("COM3"); //As Pointer

  //To use emitted signal just add:
  connect(&vanBus, &VanBus::nextClicked, &a, Do some stuff);  //vanBus is object
  connect(vanBus, &VanBus::nextClicked, &a, Do some stuff);  //vanBus is pointer
  return a.exec();
}
```
