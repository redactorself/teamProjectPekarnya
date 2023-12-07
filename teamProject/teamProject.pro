TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    book.cpp \
    elements.cpp \
    entertosystem.cpp \
    user.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    book.h \
    elements.h \
    entertosystem.h \
    user.h

