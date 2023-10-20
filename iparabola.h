#ifndef IPARABOLA_H
#define IPARABOLA_H
#include "integririvanie.h"

class IParabola: public IIntegrirovanie
{
public:
    IParabola();
    double integrate(QVector <QPoint> data);
};

#endif // IPARABOLA_H
