#ifndef VANBUS_H
#define VANBUS_H

#include <QString>
#include <qserialport.h>

#include "MultimediaInfo/steeringcontrol.h"
#include "CarStatistics/acinfo.h"
#include "CarStatistics/economyinfo.h"
#include "CarStatistics/oil.h"
#include "CarStatistics/vehicleinfo.h"

class VanBus:public QObject
{
    Q_OBJECT
public:
    VanBus(QString serialName);
    VehicleInfo* getVehicleInfo();
    SteeringControl *getSteeringControl();

    Oil* getOil();
    AcInfo* getAcInfo();
    EconomyInfo* getEconomyInfo();
    ~VanBus();
private:
    QSerialPort *serialPort;
    VehicleInfo *vehicleInfo = new VehicleInfo();
    SteeringControl *steeringControl = new SteeringControl();
    Oil *oil = new Oil();
    AcInfo *acInfo = new AcInfo();
    EconomyInfo *economyInfo = new EconomyInfo();
    int doorInfo[5];

private slots:
    void dataRead();
signals:
    void bothControlClicked();
    void nextClicked();
    void previousClicked();
    void volumeUpClicked();
    void volumeDownClicked();
    void sourceClicked();
    void tripClicked();
    void reverseEngaged();
    void reverseDisengaged();
    void wheelUp();
    void wheelDown();
    void wheelStatic();
};

#endif // VANBUS_H
