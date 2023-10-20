#ifndef CLIENT_H
#define CLIENT_H
#include "integririvanie.h"
#include <QVector>

class Client
{
public:
    Client( QVector <QPoint> d);
    void setIIntegrirovanie(IIntegrirovanie* mi);
    double integriruem();

private:
    IIntegrirovanie* methodInt;
    QVector <QPoint> data;
};

#endif // CLIENT_H
