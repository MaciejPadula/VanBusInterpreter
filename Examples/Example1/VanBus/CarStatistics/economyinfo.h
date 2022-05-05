#ifndef ECONOMYINFO_H
#define ECONOMYINFO_H


class EconomyInfo
{
public:
    void setTripFuelConsumption(float consumption);
    void setInstantaneousFuelConsumption(float consumption);
    void setMilesLeft(int milesLeft);
    void setFuelLevel(int fuelLevel);
    void setTripDistance(int distance);

    int getTripFuelConsumption();
    int getInstantaneousFuelConsumption();
    int getMilesLeft();
    int getFuelLevel();
    int getTripDistance();
private:
    float tripFuelConsumption=0;
    float instantaneousFuelConsumption=0;
    int milesLeft=0;
    int fuelLevel=0;
    int tripDistance=0;
};

#endif // ECONOMYINFO_H
