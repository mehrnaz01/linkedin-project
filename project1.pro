QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    safhe1.cpp \
    safhe2.cpp \
    safhe3.cpp \
    safhe4.cpp

HEADERS += \
    safhe1.h \
    safhe2.h \
    safhe3.h \
    safhe4.h

FORMS += \
    safhe1.ui \
    safhe2.ui \
    safhe3.ui \
    safhe4.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc
