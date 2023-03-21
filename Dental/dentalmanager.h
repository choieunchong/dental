#ifndef DENTALMANAGER_H
#define DENTALMANAGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DentalManager; }
QT_END_NAMESPACE

class DentalManager : public QMainWindow
{
    Q_OBJECT

public:
    DentalManager(QWidget *parent = nullptr);
    ~DentalManager();

private:
    Ui::DentalManager *ui;
};
#endif // DENTALMANAGER_H
