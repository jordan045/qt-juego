
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += uitools

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    boton.cpp \
    botonera.cpp \
    estado.cpp \
    formatconcentrator.cpp \
    initmenu.cpp \
    main.cpp \
    mainwindow.cpp \
    overlay_140_0001.cpp \
    overlay_140_0010.cpp \
    overlay_140_0011.cpp \
    overlay_140_0100.cpp \
    zone_displaymode.cpp \
    zone_displayselection.cpp \
    zone_center.cpp \
    zone_icm.cpp \
    zone_label.cpp \
    zone_range.cpp \
    zone_threat.cpp

HEADERS += \
    Zone.h \
    boton.h \
    botonera.h \
    estado.h \
    formatconcentrator.h \
    initmenu.h \
    mainwindow.h \
    overlay_140_0001.h \
    overlay_140_0010.h \
    overlay_140_0011.h \
    overlay_140_0100.h \
    qek.h \
    zone_displaymode.h \
    zone_displayselection.h \
    zone_center.h \
    zone_icm.h \
    zone_label.h \
    zone_range.h \
    zone_threat.h

FORMS += \
    0001.ui \
    0010.ui \
    0011.ui \
    0100.ui \
    mainwindow.ui \
    overlay_140_0001.ui \
    overlay_140_0010.ui \
    overlay_140_0011.ui \
    overlay_140_0100.ui \
    zone_displaymode.ui \
    zone_displayselection.ui \
    zone_center.ui \
    zone_icm.ui \
    zone_label.ui \
    zone_range.ui \
    zone_threat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    overlay.json
