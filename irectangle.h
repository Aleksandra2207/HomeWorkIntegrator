#ifndef IRECTANGLE_H
#define IRECTANGLE_H
#include "integririvanie.h"

class IRectangle: public IIntegrirovanie
{
public:
    IRectangle();
    double integrate(QVector <QPoint> data);
};

#endif // IRECTANGLE_H
