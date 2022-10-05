QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fileview.cpp \
    helpform.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    fileview.h \
    helpform.h \
    mainwindow.h

FORMS += \
    helpform.ui \
    mainwindow.ui

TARGET = Rk_text_red

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

TRANSLATIONS += Rk_text_red_en.ts\

CODECFORSRC = UTF-8

DISTFILES += \
    icons/file.png \
    icons/filenew.png \
    icons/fileopen.png \
    icons/filesave.png \
    icons/folder.png \
    icons/folderup.png \
    icons/iconlist.png \
    icons/license.html \
    icons/list.png \
    icons/print.png \
    icons/zip.png \
    langs/Rk_text_red_en.qm \
    langs/Rk_text_red_en.ts \
    txt/hello_world.txt \
    txt/help.txt \
    txt/help_eng.txt
