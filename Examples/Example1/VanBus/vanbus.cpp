#include "vanbus.h"
#include "vaninterpreter.h"
#include <QDebug>
VanBus::VanBus(QString serialName)
{
    this->serialPort = new QSerialPort(serialName);

    if(this->serialPort->open(QSerialPort::ReadWrite)) {
        this->serialPort->setBaudRate(QSerialPort::Baud115200);
        this->serialPort->setDataBits(QSerialPort::Data8);
        this->serialPort->setParity(QSerialPort::NoParity);
        this->serialPort->setStopBits(QSerialPort::OneStop);
        this->serialPort->setFlowControl(QSerialPort::NoFlowControl);

        connect(this->serialPort, SIGNAL(readyRead()), this, SLOT(dataRead()));
        qDebug() << "Connected";

        connect(steeringControl, &SteeringControl::nextClicked, this, [=]()
        {emit nextClicked();});

        connect(steeringControl, &SteeringControl::previousClicked, this, [=]()
        {emit previousClicked();});

        connect(steeringControl, &SteeringControl::bothControlClicked, this, [=]()
        {emit bothControlClicked();});

        connect(steeringControl, &SteeringControl::volumeDownClicked, this, [=]()
        {emit volumeDownClicked();});

        connect(steeringControl, &SteeringControl::volumeUpClicked, this, [=]()
        {emit volumeUpClicked();});

        connect(steeringControl, &SteeringControl::sourceClicked, this, [=]()
        {emit sourceClicked();});

        connect(steeringControl, &SteeringControl::tripClicked, this, [=]()
        {emit tripClicked();});

        connect(steeringControl, &SteeringControl::wheelDown, this, [=]()
        {emit wheelDown();});

        connect(steeringControl, &SteeringControl::wheelUp, this, [=]()
        {emit wheelUp();});

        connect(steeringControl, &SteeringControl::wheelStatic, this, [=]()
        {emit wheelStatic();});

        connect(vehicleInfo, &VehicleInfo::reverseEngaged, this, [=]()
        {emit reverseEngaged();});

        connect(vehicleInfo, &VehicleInfo::reverseDisengaged, this, [=]()
        {emit reverseDisengaged();});


    } else {
        qDebug() << "Cant connect";
    }
}

VehicleInfo *VanBus::getVehicleInfo()
{
    return vehicleInfo;
}
SteeringControl* VanBus::getSteeringControl(){
    return steeringControl;
}
Oil* VanBus::getOil(){
    return oil;
}
AcInfo* VanBus::getAcInfo(){
    return acInfo;
}
EconomyInfo* VanBus::getEconomyInfo(){
    return economyInfo;
}


void VanBus::dataRead(){
    while(this->serialPort->canReadLine()) {
        QString line = this->serialPort->readLine();
        //qDebug() << line;

        QString terminator = "\r";
        int pos = line.lastIndexOf(terminator);

        VanInterpreter::interpretLine(this, line.left(pos));
        //qDebug() << bytes[0];
      }
}
VanBus::~VanBus(){
    delete oil;
    delete acInfo;
    delete steeringControl;
    delete economyInfo;
    delete serialPort;
}

