#-------------------------------------------------
#
# Project created by QtCreator 2016-03-08T13:54:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = photogrammetry
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    matrixcal.cpp \
    rotation.cpp

HEADERS  += mainwindow.h \
    matrixcal.h \
    rotation.h

FORMS    += mainwindow.ui
