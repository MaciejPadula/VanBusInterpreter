#ifndef ACINFO_H
#define ACINFO_H


class AcInfo
{
public:
    void setOutsideTemperature(float temp);
    float getOutsideTemperature();
private:
    float outsideTemp = 0;
};

#endif // ACINFO_H
