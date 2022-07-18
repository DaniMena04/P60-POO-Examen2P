#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{

}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{

}

int Circulo::anchoCirculo(int grosor)
{
    mAncho = grosor;
    return mAncho;
}

