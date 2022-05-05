# VanBusInterpreter
VanBus Interpreter is a QT library that allows user to connect signals emited by for example buttons from steering wheel radio pilot.
# Usage
To use this library just copy VanBus folder to your project directory and add #include "VanBus.h" to your main file and include SerialPort library in your CMake or QMake file in Qt Creator. You will also have to add VanBus files to your make file:
```
add_subdirectory(VanBus)
target_link_libraries(Example1 Qt${QT_VERSION_MAJOR}::Core VanBus)
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
