#include <QCoreApplication>
#include <iostream>

#include <VanBus/vanbus.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    VanBus vanBus("COM2");

    //QObject::connect(&vanBus, &VanBus::nextClicked, &a, [=](){std::cout<<"Wcisniete"<<std::endl;});

    return a.exec();
}
