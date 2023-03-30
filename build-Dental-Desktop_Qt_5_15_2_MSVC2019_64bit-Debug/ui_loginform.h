/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QWidget *sdsd;
    QWidget *widget_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *LoginpushButton;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *FacepushButton;
    QPushButton *InspushButton;
    QPushButton *TwpushButton;
    QPushButton *InpushButton;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->setEnabled(true);
        LoginForm->resize(868, 556);
        LoginForm->setStyleSheet(QString::fromUtf8("QPushButton#InspushButton,#FacepushButton,#TwpushButton,#InpushButton\n"
"{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85, 98, 112, 255);\n"
"\n"
"}\n"
"QPushButton#InspushButton:hover,#FacepushButton:hover,#TwpushButton:hover,#InpushButton:hover\n"
"{\n"
"	color:rgba(131, 96, 53, 255);\n"
"}\n"
"QPushButton#InspushButton:pressed,#FacepushButton:pressed,#TwpushButton:pressed,#InpushButton:pressed\n"
"{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	color:rgba(91, 88, 53, 255);\n"
"}"));
        gridLayout_2 = new QGridLayout(LoginForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_2 = new QWidget(LoginForm);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sdsd = new QWidget(widget_2);
        sdsd->setObjectName(QString::fromUtf8("sdsd"));
        sdsd->setStyleSheet(QString::fromUtf8("border-image:url(:/Icon/den.jpg);\n"
"border-top-left-radius:50px"));

        horizontalLayout_2->addWidget(sdsd);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("background-color:rgba(255,255,255,255);\n"
"border-bottom-right-radius:50px;"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 101, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgba(0, 0, 0, 200);"));
        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 150, 211, 22));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom: 2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"padding-bottom:7px;"));
        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 230, 211, 22));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom: 2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
"padding-bottom:7px;"));
        LoginpushButton = new QPushButton(widget_3);
        LoginpushButton->setObjectName(QString::fromUtf8("LoginpushButton"));
        LoginpushButton->setGeometry(QRect(60, 290, 201, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Black"));
        font2.setPointSize(11);
        font2.setBold(true);
        LoginpushButton->setFont(font2);
        LoginpushButton->setStyleSheet(QString::fromUtf8("QPushButton#LoginpushButton\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(11, 131, 120, 219), stop:1 		     rgba(85, 98, 112, 226));\n"
"	color:rgba(255, 255, 255, 210);\n"
"	border-radius:5px;\n"
"}\n"
"QPushButton#LoginpushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.505682, x2:1, y2:0.477, stop:0 rgba(150, 123, 111, 219), stop:1 		     rgba(85, 81, 84, 226));\n"
"}\n"
"QPushButton#LoginpushButton:pressed\n"
"{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150, 123, 111, 255);\n"
"}"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 350, 221, 20));
        label_2->setStyleSheet(QString::fromUtf8("color:rgba(0, 0 ,0 210);"));
        horizontalLayoutWidget = new QWidget(widget_3);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 420, 151, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FacepushButton = new QPushButton(horizontalLayoutWidget);
        FacepushButton->setObjectName(QString::fromUtf8("FacepushButton"));
        FacepushButton->setMaximumSize(QSize(30, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("font social media 2018"));
        font3.setPointSize(15);
        font3.setBold(false);
        FacepushButton->setFont(font3);
        FacepushButton->setStyleSheet(QString::fromUtf8(""));
        FacepushButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(FacepushButton);

        InspushButton = new QPushButton(horizontalLayoutWidget);
        InspushButton->setObjectName(QString::fromUtf8("InspushButton"));
        InspushButton->setMaximumSize(QSize(30, 30));
        InspushButton->setFont(font3);
        InspushButton->setStyleSheet(QString::fromUtf8("QPushButton#InspushButton\n"
"{\n"
"	background-color: rgba(0, 0, 0, 0);\n"
"	color:rgba(85, 98, 112, 255);\n"
"\n"
"}\n"
"QPushButton#InspushButton:hover\n"
"{\n"
"	color:rgba(131, 96, 53, 255);\n"
"}\n"
"QPushButton#InspushButton:pressed\n"
"{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	color:rgba(91, 88, 53, 255);\n"
"}"));
        InspushButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(InspushButton);

        TwpushButton = new QPushButton(horizontalLayoutWidget);
        TwpushButton->setObjectName(QString::fromUtf8("TwpushButton"));
        TwpushButton->setMaximumSize(QSize(30, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("font social media 2018"));
        font4.setPointSize(15);
        TwpushButton->setFont(font4);
        TwpushButton->setStyleSheet(QString::fromUtf8(""));
        TwpushButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(TwpushButton);

        InpushButton = new QPushButton(horizontalLayoutWidget);
        InpushButton->setObjectName(QString::fromUtf8("InpushButton"));
        InpushButton->setMaximumSize(QSize(30, 30));
        InpushButton->setFont(font4);
        InpushButton->setStyleSheet(QString::fromUtf8(""));
        InpushButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(InpushButton);


        horizontalLayout_2->addWidget(widget_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 1, 1, 1);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "Log In", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("LoginForm", "User Name", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("LoginForm", "Password", nullptr));
        LoginpushButton->setText(QCoreApplication::translate("LoginForm", "Log In", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "Forgot your User Name or password?", nullptr));
        FacepushButton->setText(QCoreApplication::translate("LoginForm", "f", nullptr));
        InspushButton->setText(QCoreApplication::translate("LoginForm", "c", nullptr));
        TwpushButton->setText(QCoreApplication::translate("LoginForm", "t", nullptr));
        InpushButton->setText(QCoreApplication::translate("LoginForm", "i", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
