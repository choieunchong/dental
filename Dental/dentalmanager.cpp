#include "dentalmanager.h"
#include "ui_dentalmanager.h"

DentalManager::DentalManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DentalManager)
{
    ui->setupUi(this);

}

DentalManager::~DentalManager()
{
    delete ui;
}

