#include "mainwindow.h"

#include <QApplication>
#include <QVector>
#include <QPoint>
#include <math.h>
#include <QDebug>
#include "integririvanie.h"
#include "irectangle.h"
#include "itrap.h"
#include "iparabola.h"
#include "client.h"




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QVector <QPoint> data;
    for (int i=0; i<10; i++)
    {
       QPoint point(i, pow(i,2)+2);
       data.append(point);
    }

    Client client(data);
    client.setIIntegrirovanie(new IRectangle());
    qDebug() << client.integriruem();
    client.setIIntegrirovanie(new ITrap());
    qDebug() << client.integriruem();
    client.setIIntegrirovanie(new IParabola());
    qDebug() << client.integriruem();

    return a.exec();
}
