# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = SuperviseurSerre
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ../ProjetVuePrincipaleTesteur/VuePrincipale.cpp.cc ../VueMeteotest/VueMeteo.cpp.cc ../VueSerreTesteur/VueSerre.cpp.cc main.cpp
HEADERS += ../VueMeteotest/VueMeteo.h ../VueSerreTesteur/VueSerre.h VuePrincipale.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
