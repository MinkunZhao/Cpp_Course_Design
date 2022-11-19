QT       += core gui   multimedia


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++11


# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS


# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    gamewindow.cpp \
    introduction.cpp \
    main.cpp \
    mainwindow.cpp\
    Control.cpp\
    city.cpp\
    player.cpp\
    unit.cpp\
    Map.cpp \
    dice.cpp \
    dicebysound.cpp \
    developers.cpp


HEADERS += \
    gamewindow.h \
    introduction.h \
    mainwindow.h\
    Control.h\
    city.h\
    player.h\
    unit.h\
    Map.h \
    dice.h \
    dicebysound.h \
    developers.h


FORMS += \
    gamewindow.ui \
    introduction.ui \
    mainwindow.ui \
    dicebysound.ui \
    developers.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


DISTFILES += \
    ../source/gameback.jpeg \
    DevelopersForm.ui.qml \
    Developers.qml \
    info_history


RESOURCES += \
    ../source/city.qrc \
    ../source/gameback.qrc \
    ../source/headimg.qrc \
    ../source/v2game.qrc
