/********************************************************************************
** Form generated from reading UI file 'joinmembershipform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINMEMBERSHIPFORM_H
#define UI_JOINMEMBERSHIPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoinmembershipForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_5;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton;

    void setupUi(QWidget *JoinmembershipForm)
    {
        if (JoinmembershipForm->objectName().isEmpty())
            JoinmembershipForm->setObjectName(QString::fromUtf8("JoinmembershipForm"));
        JoinmembershipForm->resize(493, 497);
        label = new QLabel(JoinmembershipForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 48, 16));
        label_2 = new QLabel(JoinmembershipForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 120, 48, 16));
        label_3 = new QLabel(JoinmembershipForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 190, 121, 16));
        lineEdit = new QLineEdit(JoinmembershipForm);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 70, 113, 22));
        lineEdit_2 = new QLineEdit(JoinmembershipForm);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 150, 113, 22));
        lineEdit_3 = new QLineEdit(JoinmembershipForm);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 210, 113, 22));
        lineEdit_4 = new QLineEdit(JoinmembershipForm);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(40, 290, 91, 22));
        label_4 = new QLabel(JoinmembershipForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 260, 81, 16));
        lineEdit_5 = new QLineEdit(JoinmembershipForm);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 290, 91, 22));
        lineEdit_6 = new QLineEdit(JoinmembershipForm);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(260, 290, 91, 22));
        label_5 = new QLabel(JoinmembershipForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 330, 81, 31));
        lineEdit_7 = new QLineEdit(JoinmembershipForm);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(50, 370, 91, 22));
        pushButton = new QPushButton(JoinmembershipForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 380, 121, 41));

        retranslateUi(JoinmembershipForm);

        QMetaObject::connectSlotsByName(JoinmembershipForm);
    } // setupUi

    void retranslateUi(QWidget *JoinmembershipForm)
    {
        JoinmembershipForm->setWindowTitle(QCoreApplication::translate("JoinmembershipForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("JoinmembershipForm", "\354\225\204\354\235\264\353\224\224", nullptr));
        label_2->setText(QCoreApplication::translate("JoinmembershipForm", "\353\271\204\353\260\200\353\262\210\355\230\270", nullptr));
        label_3->setText(QCoreApplication::translate("JoinmembershipForm", "\353\271\204\353\260\200\353\262\210\355\230\270 \354\236\254\355\231\225\354\235\270", nullptr));
        label_4->setText(QCoreApplication::translate("JoinmembershipForm", "\355\234\264\353\214\200\355\217\260 \353\262\210\355\230\270", nullptr));
        label_5->setText(QCoreApplication::translate("JoinmembershipForm", "\354\203\235\353\205\204 \354\233\224\354\235\274", nullptr));
        pushButton->setText(QCoreApplication::translate("JoinmembershipForm", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoinmembershipForm: public Ui_JoinmembershipForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINMEMBERSHIPFORM_H
