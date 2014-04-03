#-------------------------------------------------
#
# Project created by QtCreator 2011-07-14T11:52:06
#
#-------------------------------------------------

//QT       += core gui
   QT       += sql

TARGET = countrygame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    helpscreen.cpp \
    playscreen.cpp \
    enterthedataindb.cpp \
    scoreresult.cpp \
    instruction.cpp

HEADERS  += mainwindow.h \
    helpscreen.h \
    playscreen.h \
    enterthedataindb.h \
    scoreresult.h \
    instruction.h

FORMS    += mainwindow.ui \
    helpscreen.ui \
    playscreen.ui \
    enterthedataindb.ui \
    enterthedataindb.ui \
    enterthedataindb.ui \
    enterthedataindb.ui \
    scoreresult.ui \
    instruction.ui

CONFIG += mobility
MOBILITY = 

symbian {
    TARGET.UID3 = 0xe812bf8c
    # TARGET.CAPABILITY += 
    TARGET.EPOCSTACKSIZE = 0x14000
    TARGET.EPOCHEAPSIZE = 0x020000 0x800000
}
