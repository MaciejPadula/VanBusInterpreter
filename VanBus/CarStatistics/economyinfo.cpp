#include "economyinfo.h"

void EconomyInfo::setTripFuelConsumption(float consumption){
    this->tripFuelConsumption = consumption;
}
void EconomyInfo::setInstantaneousFuelConsumption(float consumption){
    this->instantaneousFuelConsumption = consumption;
}
void EconomyInfo::setMilesLeft(int milesLeft){
    this->milesLeft = milesLeft;
}
void EconomyInfo::setFuelLevel(int fuelLevel){
    this->fuelLevel = fuelLevel;
}
void EconomyInfo::setTripDistance(int distance){
    this->tripDistance = distance;
}

int EconomyInfo::getTripFuelConsumption(){
    return tripFuelConsumption;
}
int EconomyInfo::getInstantaneousFuelConsumption(){
    return instantaneousFuelConsumption;
}
int EconomyInfo::getMilesLeft(){
    return milesLeft;
}
int EconomyInfo::getFuelLevel(){
    return fuelLevel;
}
int EconomyInfo::getTripDistance(){
    return tripDistance;
}
