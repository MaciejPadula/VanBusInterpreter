#ifndef VANINTERPRETER_H
#define VANINTERPRETER_H

#include "vanbus.h"

#include <QString>
#include <QRegularExpression>

//#include <QSerialPort>

class VanInterpreter
{
public:
    static QString toDec(bool isneg, QString num);
    static bool bitFromData(QString data, int index);
    static void interpretLine(VanBus *vanBus, QString line);
private:
    VanInterpreter();
};

#endif // VANINTERPRETER_H
