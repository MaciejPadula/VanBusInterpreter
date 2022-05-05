#ifndef OIL_H
#define OIL_H


class Oil
{
public:
    void setTemperature(int temp);
    void setLevel(int level);
    int getTemperature();
    int getLevel();
private:
    int temp=0;
    int level=0;
};

#endif // OIL_H
