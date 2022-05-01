#include "vaninterpreter.h"
#include <QDebug>

QString VanInterpreter::toDec(bool isneg, QString num)
{
    int val = 0;

    for( int i = 0; i < num.length(); i++ ) {
        val = (val << 1) + num.at(i).digitValue();
    }

    return QString::number( isneg ? -val: val);
}

bool VanInterpreter::bitFromData(QString data, int index)
{
    return QString(data[index]).toInt();
}

void VanInterpreter::interpretLine(VanBus *vanBus, QString line){
    QStringList bytes = line.mid(26,line.length()).split(" ");

    QString id = bytes[1];
    QString type = bytes[2];
    QStringList data = bytes[3].split(QRegularExpression("[-:]"));
//    qDebug() << id;
//    qDebug() << type;
//    qDebug() << data;

    bool ok;

    for(int i=0;i<data.length();++i){
        data[i]=QString("%1").arg(data[i].toULongLong(&ok, 16), 8, 2, QChar('0'));

    }
    if(id=="E24" && type=="W-0"){
        QString vin="";
        //17
        for(int i=0;i<17;++i){
            vin+=(char)toDec(0,data[i]).toInt();
        }
        qDebug() << vin;
    }
    if(id=="8A4" && type=="W-0"){
        //qDebug() << "Engine running: "+QString(data[1][5]);
        vanBus->getAcInfo()->setOutsideTemperature((toDec(0,data[6]).toInt()-80.0)/2.0);
        vanBus->getVehicleInfo()->setReverseEngage(bitFromData(data[1],2));
                //QString(data[1][2]).toInt();
        //qDebug() << "Reverse gear: " << reverse;

        //4,5,6
        vanBus->getVehicleInfo()->setMilleage(toDec(0,data[3]+data[4]+data[5]).toInt()/10.0);
        //qDebug() << "Mileage[km]: " << vanBus->getVehicleInfo()->getMilleage();
    }
    if(id=="4FC" && type=="WA0"){
        vanBus->getOil()->setTemperature(toDec(0,data[6]).toInt() - 40.0);
        vanBus->getOil()->setLevel(toDec(0,data[8]).toInt());
        vanBus->getEconomyInfo()->setFuelLevel(toDec(0,data[7]).toInt());
        //qDebug() << oilTemp;
    }

    if(id=="9C4" && type=="WA0"){
        vanBus->getSteeringControl()->setRadioButtons(data);

        //qDebug() << "Pilot Status: " << pilotStatus[0] << pilotStatus[1] << pilotStatus[2] << pilotStatus[3] << pilotStatus[4] << pilotStatus[5] << pilotStatus[6] << pilotStatus[7];
    }
    if(id=="984" && type=="W-0"){
        int uptime = toDec(0, data[0]+data[1]).toInt();
        //qDebug() << uptime;
    }
    if(id=="564" && type=="RA0"){
        for(int i=0;i<5;i++){
            //doorInfo[i]=QString(data[7][i]).toInt();
        }
        vanBus->getSteeringControl()->setTripButton(bitFromData(data[10],7));
                   // QString(data[10][7]).toInt());
        //qDebug() << "Door Info: " << doorInfo[0] << doorInfo[1] << doorInfo[2] << doorInfo[3] << doorInfo[4];

        vanBus->getVehicleInfo()->setMeanSpeed(toDec(0,data[11]).toInt());
        vanBus->getEconomyInfo()->setTripDistance(toDec(0,data[14]+data[15]).toInt());
        vanBus->getEconomyInfo()->setTripFuelConsumption(toDec(0,data[16]+data[17]).toInt());
        vanBus->getEconomyInfo()->setInstantaneousFuelConsumption(toDec(0,data[22]+data[23]).toInt());
        vanBus->getEconomyInfo()->setMilesLeft(toDec(0,data[24]+data[25]).toInt());

//        qDebug() << "Srednia predkosc: " << meanSpeed;
//        qDebug() << "Zasieg na paliwie:" << milesLeft;
//        qDebug() << "Przejechane[km]:" << tripDistance;
//        qDebug() << "Srednie zuzycie paliwa:" << tripFuelConsumption;
//        qDebug() << "Aktualne zuzycie paliwa:" << instantaneousFuelConsumption;
    }
}
