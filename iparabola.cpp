#include "iparabola.h"
#include <QVector>
#include <math.h>

IParabola::IParabola()
{

}

double IParabola::integrate(QVector <QPoint> data)
{
    double sum=0;
    int i=0;
    while(i<=data.length()-4)
    {
        double x1=data.at(i).x(), x2=data.at(i+1).x(), x3=data.at(i+2).x(), y1=data.at(i).y(), y2=data.at(i+1).y(), y3=data.at(i+2).y();

        double a=(y3-(x3*(y2-y1)+x2*y1-x1*y2)/(x2-x1))/(x3*(x3-x1-x2)+x1*x2);
        double b=(y2-y1)/(x2-x1)-a*(x1+x2);
        double c=(x2*y1-x1*y2)/(x2-x1)+a*x1*x2;

        sum+=(a/3*pow(x3, 3)+b/2*pow(x3, 2)+c*x3)-(a/3*pow(x1, 3)+b/2*pow(x1, 2)+c*x1);
        i+=2;
    }

    sum+=(data.at(data.length()-1).x() - data.at(data.length()-2).x())*((double)data.at(data.length()-2).y()+ (double)data.at(data.length()-1).y())/2;
    return sum;
}
