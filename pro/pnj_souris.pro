QT          += core gui

greaterThan(QT_MAJOR_VERSION, 4) : QT +=widgets

CONFIG +=c++11

# You can make your code fail compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000       # disables all APIs before Qt 6.0.0

SOURCES += \
    src/buttontester.cpp \
    src/main.cpp

HEADERS += \
    inc/buttontester.h

# Default rules for deployement.
qnx: target.path= /tmp/$${TARGET}/bin
! isEmpty(target.path): INSTALLS += target
