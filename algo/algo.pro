TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    search/src/EnumSearch.cpp \
    sort/src/Bubble.cpp \
    structure/src/Array.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    search/include/Search.h \
    sort/include/Sort.h \
    structure/include/Structure.h

INCLUDEPATH += \
    search/include \
    sort/include \
    structure/include

