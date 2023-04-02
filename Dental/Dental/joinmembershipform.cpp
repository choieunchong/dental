#include "joinmembershipform.h"
#include "ui_joinmembershipform.h"

JoinmembershipForm::JoinmembershipForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JoinmembershipForm)
{
    ui->setupUi(this);
}

JoinmembershipForm::~JoinmembershipForm()
{
    delete ui;
}
