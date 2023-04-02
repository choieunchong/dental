#include "deskform.h"
#include "ui_deskform.h"

DeskForm::DeskForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DeskForm)
{
    ui->setupUi(this);
}

DeskForm::~DeskForm()
{
    delete ui;
}
