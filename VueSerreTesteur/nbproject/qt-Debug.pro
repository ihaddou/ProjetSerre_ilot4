# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = VueSerreTesteur
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ../ClassesMetier/Observable.cpp ../ClassesMetier/Observateur.cpp ../ClassesMetier/infoclimat.cpp VueSerre.cpp.cc main.cpp
HEADERS += ../ClassesMetier/Observable.h ../ClassesMetier/Observateur.h ../ClassesMetier/infoclimat.h VueSerre.h
FORMS += VueSerre.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
