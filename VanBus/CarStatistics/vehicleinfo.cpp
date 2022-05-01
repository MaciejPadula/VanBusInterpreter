#include "vehicleinfo.h"


void VehicleInfo::setMilleage(float milleage){
    this->milleage = milleage;
}
void VehicleInfo::setReverseEngage(bool reverse){
    if(this->reverse==0 && reverse==1){
        emit reverseEngaged();
    }
    else if(this->reverse==1 && reverse==0){
        emit reverseDisengaged();
    }
    this->reverse = reverse;
}

void VehicleInfo::setMeanSpeed(int meanSpeed)
{
    this->meanSpeed = meanSpeed;
}

float VehicleInfo::getMilleage(){
    return milleage;
}
bool VehicleInfo::getReverseEngaged(){
    return reverse;
}

int VehicleInfo::getMeanSpeed()
{
    return meanSpeed;
}
