#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QPainter>
#include <QPen>

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);

    int anchoCirculo(int grosor);

private:
//    QPoint pInicial;
//    QPoint pFinal;

    int mAncho;

};

#endif // CIRCULO_H
