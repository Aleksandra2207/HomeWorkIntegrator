#include "irectangle.h"
#include <QVector>

IRectangle::IRectangle()
{

}

double IRectangle::integrate(QVector <QPoint> data)
{
    double sum=0;
    for(int i=0; i < data.length()-1; i++)
    {
        sum+=(data.at(i+1).x() - data.at(i).x())*data.at(i).y();
    }
    return sum;
}
