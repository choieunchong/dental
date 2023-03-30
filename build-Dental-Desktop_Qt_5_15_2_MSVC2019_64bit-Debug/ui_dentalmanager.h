/********************************************************************************
** Form generated from reading UI file 'dentalmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENTALMANAGER_H
#define UI_DENTALMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DentalManager
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DentalManager)
    {
        if (DentalManager->objectName().isEmpty())
            DentalManager->setObjectName(QString::fromUtf8("DentalManager"));
        DentalManager->resize(800, 600);
        centralwidget = new QWidget(DentalManager);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DentalManager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DentalManager);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        DentalManager->setMenuBar(menubar);
        statusbar = new QStatusBar(DentalManager);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DentalManager->setStatusBar(statusbar);

        retranslateUi(DentalManager);

        QMetaObject::connectSlotsByName(DentalManager);
    } // setupUi

    void retranslateUi(QMainWindow *DentalManager)
    {
        DentalManager->setWindowTitle(QCoreApplication::translate("DentalManager", "DentalManager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DentalManager: public Ui_DentalManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENTALMANAGER_H
