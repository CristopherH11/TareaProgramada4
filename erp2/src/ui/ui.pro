QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    creartienda.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    creartienda.h \
    mainwindow.h

FORMS += \
    creartienda.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../lib/release/ -ltienda
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../lib/debug/ -ltienda
else:unix: LIBS += -L$$PWD/../lib/ -ltienda

INCLUDEPATH += $$PWD/../lib/include
DEPENDPATH += $$PWD/../lib/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../TareaProgramada3-1/bin/release/ -ltienda
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../TareaProgramada3-1/bin/debug/ -ltienda
else:unix: LIBS += -L$$PWD/../../../../TareaProgramada3-1/bin/ -ltienda

INCLUDEPATH += $$PWD/../../../../TareaProgramada3-1/bin/include
DEPENDPATH += $$PWD/../../../../TareaProgramada3-1/bin/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../lib/release/ -ltienda
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../lib/debug/ -ltienda
else:unix: LIBS += -L$$PWD/../lib/ -ltienda

INCLUDEPATH += $$PWD/../lib/include
DEPENDPATH += $$PWD/../lib/include
