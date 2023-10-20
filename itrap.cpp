#include "itrap.h"
#include <QVector>

ITrap::ITrap()
{

}

double ITrap::integrate(QVector <QPoint> data)
{
    double sum=0;
    for(int i=0; i < data.length()-1; i++)
    {
        sum+=((double) data.at(i+1).x() - data.at(i).x())*((double)data.at(i+1).y() + (double) data.at(i).y())/2;
    }
    return sum;
}
