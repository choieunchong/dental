#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

}

LoginForm::~LoginForm()
{
    delete ui;
}
