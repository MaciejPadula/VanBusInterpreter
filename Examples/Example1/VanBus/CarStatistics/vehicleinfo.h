#ifndef VEHICLEINFO_H
#define VEHICLEINFO_H

#include <QObject>

class VehicleInfo:public QObject
{
    Q_OBJECT
public:
    void setMilleage(float milleage);
    void setReverseEngage(bool reverse);
    void setMeanSpeed(int meanSpeed);

    float getMilleage();
    bool getReverseEngaged();
    int getMeanSpeed();
private:
    float milleage=0;
    bool reverse=0;
    int meanSpeed=0;
signals:
    void reverseEngaged();
    void reverseDisengaged();
};

#endif // VEHICLEINFO_H
