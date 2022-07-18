#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    m_lienzo =QPixmap(800,400);

    this->dibujar();

    ui->marco->setPixmap(m_lienzo);


}

Juego::~Juego()
{
    delete ui;
}

void Juego::paintEvent(QPaintEvent *event)
{
    ui->marco->setPixmap(m_lienzo);
}


void Juego::on_btnArriba_released()
{

}


void Juego::on_btnAbajo_released()
{

}


void Juego::on_btnIzqueirda_released()
{

}


void Juego::on_btnDerecha_released()
{

}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::dibujar()
{
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());

    m_lienzo.fill(Qt::white);

    QPainter m_pintor(&m_lienzo);

    int x = 210;
    int y = 210;

    QPen pincel;

    pincel.setColor(Qt::black);
    pincel.setWidth(m_circulo->anchoCirculo(m_grosor.getDimension()));

    m_pintor.setPen(pincel);
    m_pintor.drawEllipse(centro.x(), centro.y(),x+m_grosor.getDimension(),y+m_grosor.getDimension());

}

