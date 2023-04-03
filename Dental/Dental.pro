QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    deskform.cpp \
    joinmembershipform.cpp \
    loginform.cpp \
    main.cpp \
    dentalmanager.cpp \
    registrationform.cpp

HEADERS += \
    dentalmanager.h \
    deskform.h \
    joinmembershipform.h \
    loginform.h \
    registrationform.h

FORMS += \
    dentalmanager.ui \
    deskform.ui \
    joinmembershipform.ui \
    loginform.ui \
    registrationform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc
