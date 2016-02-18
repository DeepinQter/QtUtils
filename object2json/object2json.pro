#-------------------------------------------------
#
# Project created by QtCreator 2016-02-17T17:38:09
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = qjsontest
CONFIG   += console
CONFIG   -= app_bundle

PKGCONFIG +=
CONFIG += c++11 link_pkgconfig

TEMPLATE = app


SOURCES += main.cpp \
    person.cpp \
    qobjecthelper.cpp \
    historyrecord.cpp \
    debugobejct.cpp

HEADERS += \
    person.h \
    qobjecthelper.h \
    historyrecord.h \
    debugobejct.h
