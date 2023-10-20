#ifndef INTEGRIRIVANIE_H
#define INTEGRIRIVANIE_H
#include <QPoint>

class IIntegrirovanie
{
public:
    IIntegrirovanie();
    virtual double integrate(QVector <QPoint> data)=0;
};

#endif // INTEGRIRIVANIE_H
