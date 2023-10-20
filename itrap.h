#ifndef ITRAP_H
#define ITRAP_H
#include "integririvanie.h"

class ITrap: public IIntegrirovanie
{
public:
    ITrap();
    double integrate(QVector <QPoint> data);
};

#endif // ITRAP_H
