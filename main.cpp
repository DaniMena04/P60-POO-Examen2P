#include "juego.h"

#include <QApplication>

/*
 *      Estudiante: Daniel Mauricio Mena Estrella
 *      Cedula: 1727346601
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
