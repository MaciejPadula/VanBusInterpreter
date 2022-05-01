#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QTimer>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    van = new VanBus("COM2");

    connect(van, &VanBus::nextClicked, this, [=]()
    {
        ui->next->setStyleSheet("background-color:#FF0000;");
        ui->both->setStyleSheet("background-color:rgba(0,0,0,0)");
    });

    connect(van, &VanBus::previousClicked, this, [=]()
    {
        ui->prev->setStyleSheet("background-color:#FF0000;");
        ui->both->setStyleSheet("background-color:rgba(0,0,0,0)");
    });
    connect(van, &VanBus::bothControlClicked, this, [=]()
    {
        ui->both->setStyleSheet("background-color:#FF0000;");
        ui->next->setStyleSheet("background-color:rgba(0,0,0,0)");
        ui->prev->setStyleSheet("background-color:rgba(0,0,0,0)");
    });

    connect(van, &VanBus::volumeDownClicked, this,
            [=](){ui->lower->setStyleSheet("background-color:#FF0000;");});
    connect(van, &VanBus::volumeUpClicked, this,
            [=](){ui->higher->setStyleSheet("background-color:#FF0000;");});

    connect(van, &VanBus::sourceClicked,
            [=](){ui->src->setStyleSheet("background-color:#FF0000;");});

    connect(van, &VanBus::reverseEngaged, this, [=]()
    {
        ui->label_7->setText("1");
    });

    connect(van, &VanBus::reverseDisengaged, this, [=]()
    {
        ui->label_7->setText("0");
    });

    connect(van, &VanBus::wheelDown, this, [=]()
    {
        ui->down->setStyleSheet("background-color:#FF0000;");
        ui->up->setStyleSheet("background-color:rgba(0,0,0,0)");
    });
    connect(van, &VanBus::wheelUp, this, [=]()
    {
        ui->up->setStyleSheet("background-color:#FF0000;");
        ui->down->setStyleSheet("background-color:rgba(0,0,0,0)");
    });
    connect(van, &VanBus::wheelStatic, this, [=]()
    {
        ui->up->setStyleSheet("background-color:rgba(0,0,0,0);");
        ui->down->setStyleSheet("background-color:rgba(0,0,0,0)");
    });

    //van->interpretLine("Raw: #7541 (12/15) 27(32) 0E 564 RA0 82-00-00-00-00-00-00-00-00-00-18-00-00-15-00-00-FF-FF-00-00-FF-FF-FF-FF-01-18-82:EF-38 ACK OK EF38 CRC_OK");
    //van->interpretLine("Raw: #7549 ( 5/15)  7(12) 0E 8A4 W-0 8F-23-2E-13-8D-B1-63:D8-42 NO_ACK OK D842 CRC_OK");



    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(tick()));
    timer->setInterval(10);
    timer->start();
}
void MainWindow::tick(){
    QLabel *tab[] = {ui->label_1,ui->label_2,ui->label_3,ui->label_4,ui->label_5};
    tab[0]->setText(QString::number(van->getEconomyInfo()->getTripDistance()));
    tab[1]->setText(QString::number(van->getEconomyInfo()->getInstantaneousFuelConsumption()));
    tab[2]->setText(QString::number(van->getVehicleInfo()->getMeanSpeed()));
    tab[3]->setText(QString::number(van->getEconomyInfo()->getTripFuelConsumption()));
    tab[4]->setText(QString::number(van->getEconomyInfo()->getMilesLeft()));
    if(van->getSteeringControl()->getNextStatus()==0){
       ui->next->setStyleSheet("background-color:rgba(0,0,0,0)");
       ui->both->setStyleSheet("background-color:rgba(0,0,0,0)");
    }
    if(van->getSteeringControl()->getPreviousStatus()==0){
       ui->prev->setStyleSheet("background-color:rgba(0,0,0,0)");
       ui->both->setStyleSheet("background-color:rgba(0,0,0,0)");
    }
    if(van->getSteeringControl()->getVolumeUpStatus()==0){
       ui->higher->setStyleSheet("background-color:rgba(0,0,0,0)");
    }
    if(van->getSteeringControl()->getVolumeDownStatus()==0){
       ui->lower->setStyleSheet("background-color:rgba(0,0,0,0)");
    }
    if(van->getSteeringControl()->getSourceStatus()==0){
       ui->src->setStyleSheet("background-color:rgba(0,0,0,0)");
    }
    ui->oil->setValue(van->getOil()->getLevel());
    ui->fuel->setValue(van->getEconomyInfo()->getFuelLevel());
    ui->outsideTemp->setText(QString::number(van->getAcInfo()->getOutsideTemperature()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete van;
}

