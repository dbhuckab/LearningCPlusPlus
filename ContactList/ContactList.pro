#-------------------------------------------------
#
# Project created by QtCreator 2013-07-09T21:38:36
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ContactList
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    contact.cpp \
    contactlist.cpp \
    contactfactory.cpp

HEADERS += \
    contact.h \
    contactlist.h \
    contactfactory.h

OTHER_FILES += \
    ExcerciseText.txt \
    README.txt
