QT       += core gui sql serialport printsupport network charts multimedia


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    calculatrice.cpp \
    connexion.cpp \
    dialog.cpp \
    emplyer.cpp \
    excel.cpp \
    fonction.cpp \
    fournisseur.cpp \
    historique.cpp \
    mailing.cpp \
    main.cpp \
    mainwindow.cpp \
    materiel.cpp \
    music.cpp \
    remise.cpp \
    smtp.cpp

HEADERS += \
    arduino.h \
    calculatrice.h \
    connexion.h \
    dialog.h \
    emplyer.h \
    excel.h \
    fonction.h \
    fournisseur.h \
    historique.h \
    mailing.h \
    mainwindow.h \
    materiel.h \
    music.h \
    remise.h \
    smtp.h

FORMS += \
    calculatrice.ui \
    dialog.ui \
    mainwindow.ui \
    music.ui
QMAKE_CXXFLAGS += -std=gnu++11

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    collaboration.png \
    configuration.png \
    materiel.png \
    plat.png \
    rh.png \
    stock.png \
    vente.png

RESOURCES += \
    collab.qrc \
    config.qrc \
    materiel.qrc \
    plat.qrc \
    rh.qrc \
    stock.qrc \
    vente.qrc
