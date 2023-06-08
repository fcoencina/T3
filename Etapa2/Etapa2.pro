TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        door.cpp \
        magnetic_sensor.cpp \
        main.cpp \
        sensor.cpp \
        window.cpp \
        central.cpp

HEADERS += \
    door.h \
    magnetic_sensor.h \
    sensor.h \
    window.h \
    central.h

DISTFILES += \
    config.txt
