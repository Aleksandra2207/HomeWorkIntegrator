#include "client.h"


Client::Client( QVector <QPoint> d)
{
    data=d;
}

void Client::setIIntegrirovanie(IIntegrirovanie* mi)
{
    methodInt = mi;
}

double Client::integriruem()
{
    return methodInt->integrate(data);
}
