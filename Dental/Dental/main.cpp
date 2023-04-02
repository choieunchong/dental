#include "dentalmanager.h"
#include "loginform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DentalManager w;
    LoginForm l;
    l.show();
    //w.show();
    //w.setStyleSheet("background-image: url(den.jpg);background-position: center;");
    return a.exec();
}
