# VanBusInterpreter
VanBus Interpreter is a QT library that allows user to connect signals emited by for example buttons from steering wheel radio pilot.
# Usage
To use this library just copy VanBus folder to your project directory and add #include "VanBus.h" to your main file and include SerialPort library in your CMake or QMake file in Qt Creator. Then you have to create object of VanBus class: <br/>
VanBus vanBus("COM3"); // As object
<br/>
VanBus *vanBus = new VanBus("COM3"); //As Pointer
#
To use emitted signal just add: <br/>
connect(vanBus, &VanBus::nextClicked, this, Do some stuff); // first argument have to be a pointer so if you declared VanBus as obect use &vanBus;
