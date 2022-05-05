#include "steeringcontrol.h"
#include "../vaninterpreter.h"

void SteeringControl::setRadioButtons(QStringList data){
    if(VanInterpreter::bitFromData(data[0],0)==1 && VanInterpreter::bitFromData(data[0],1)==1){
        emit bothControlClicked();
    }
    else {
        if(nextButton==0 && VanInterpreter::bitFromData(data[0],0)==1){
            emit nextClicked();
        }

        if(prevButton==0 && VanInterpreter::bitFromData(data[0],1)==1){
            emit previousClicked();
        }
    }

    if(volumeUpButton==0 && VanInterpreter::bitFromData(data[0],4)==1){
        emit volumeUpClicked();
    }
    if(volumeDownButton==0 && VanInterpreter::bitFromData(data[0],5)==1){
        emit volumeDownClicked();
    }
    if(srcButton==0 && VanInterpreter::bitFromData(data[0],6)==1){
        emit sourceClicked();
    }

    nextButton = VanInterpreter::bitFromData(data[0],0);
    prevButton = VanInterpreter::bitFromData(data[0],1);


    //qDebug() << "Roll: "+VanInterpreter::toDec(0,data[1]);
    if((position>VanInterpreter::toDec(0,data[1]).toInt()) || (position==0 && VanInterpreter::toDec(0,data[1]).toInt()==128)){
        emit wheelDown();
    }
    else if((position<VanInterpreter::toDec(0,data[1]).toInt())|| (position==255 && VanInterpreter::toDec(0,data[1]).toInt()==128)){
        emit wheelUp();
    }
    else if(position==VanInterpreter::toDec(0,data[1]).toInt()){
        emit wheelStatic();
    }
    position = VanInterpreter::toDec(0,data[1]).toInt();
    volumeUpButton = VanInterpreter::bitFromData(data[0],4);
    volumeDownButton = VanInterpreter::bitFromData(data[0],5);
    srcButton = VanInterpreter::bitFromData(data[0],6);
}
void SteeringControl::setTripButton(bool val){
    if(tripButton==0 && val==1){
        emit tripClicked();
    }
    tripButton = val;
}
bool SteeringControl::getNextStatus(){
    return nextButton;
}
bool SteeringControl::getPreviousStatus(){
    return prevButton;
}
bool SteeringControl::getVolumeUpStatus(){
    return volumeUpButton;
}
bool SteeringControl::getVolumeDownStatus(){
    return volumeDownButton;
}
bool SteeringControl::getSourceStatus(){
    return srcButton;
}
bool SteeringControl::getTripStatus(){
    return tripButton;
}
