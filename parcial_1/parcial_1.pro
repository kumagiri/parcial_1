TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        menus.cpp \
        transaccion.cpp \
        usuarios.cpp

HEADERS += \
    Transaccion.h \
    hmenus.h \
    usuarios.h
