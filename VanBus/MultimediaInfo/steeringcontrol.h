#ifndef RADIOSTEERING_H
#define RADIOSTEERING_H

#include <QObject>
#include <QStringList>



class SteeringControl:public QObject
{
    Q_OBJECT
public:
    bool getNextStatus();
    bool getPreviousStatus();
    bool getVolumeUpStatus();
    bool getVolumeDownStatus();
    bool getSourceStatus();
    bool getTripStatus();
    void setRadioButtons(QStringList data);
    void setTripButton(bool val);
private:
    bool nextButton=0;
    bool prevButton=0;
    bool volumeUpButton=0;
    bool volumeDownButton=0;
    bool srcButton=0;
    bool tripButton=0;
    int position=0;
signals:
    void bothControlClicked();
    void nextClicked();
    void previousClicked();
    void volumeUpClicked();
    void volumeDownClicked();
    void sourceClicked();
    void tripClicked();
    void wheelUp();
    void wheelDown();
    void wheelStatic();
};

#endif // RADIOSTEERING_H
