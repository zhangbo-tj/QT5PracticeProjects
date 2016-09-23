#-------------------------------------------------
#
# Project created by QtCreator 2016-09-23T23:56:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DialogExample
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    baseinfo.cpp \
    contact.cpp \
    detail.cpp

HEADERS  += dialog.h \
    baseinfo.h \
    contact.h \
    detail.h

DISTFILES += \
    head.jpg
