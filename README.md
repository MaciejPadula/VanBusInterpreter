# VanBusInterpreter
VanBus Interpreter is a QT library that allows user to connect signals emited by for example buttons from steering wheel radio pilot.
# Usage
To use this library just copy VanBus folder to your project directory and add #include "VanBus.h" to your main file. Then you have to create object of VanBus class: <br/>
VanBus vanBus("COM3"); // As object
<br/>
VanBus *vanBus = new VanBus("COM3"); //As Pointer
<br/>
You have to provide information about serial port of VanBus sniffing device.
<br/>
To use emitted signal just add:
connect(vanBus, &VanBus::nextClicked, this, [=](){ Do some stuff }); // first argument have to be a pointer so if you declared VanBus as obect use &vanBus;
