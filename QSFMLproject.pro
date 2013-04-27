#-----------------------------
#
# Project created by QtCreator
#
#-----------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

LIBS += -lsfml-graphics -lsfml-window -lsfml-network -lsfml-audio -lsfml-system


TARGET = QSFMLproject
TEMPLATE = app


SOURCES += main.cpp \
    qsfml/qsfmlcanvas.cpp \
    example/myqsfmlcanvas.cpp

HEADERS += \
    qsfml/qsfmlcanvas.h \
    example/myqsfmlcanvas.h

