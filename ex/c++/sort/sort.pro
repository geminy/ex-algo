TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    bubblesort.cpp \
    selectionsort.cpp \
    insertsort.cpp \
    quicksort.cpp \
    heapsort.cpp \
    mergesort.cpp \
    shellsort.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    sort.h

