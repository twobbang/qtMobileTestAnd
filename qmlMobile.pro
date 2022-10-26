QT += quick

SOURCES += \
        facedetect.cpp \
        main.cpp

resources.files = main.qml 
resources.prefix = /$${TARGET}
RESOURCES += resources

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    facedetect.h

#INCLUDEPATH += 'C:/opencv451/build/include'
#LIBS += -L'C:/opencv451/build/x64/vc15/lib'

#LIBS += -L'C:/opencv451/build/x64/vc15/lib/'\
#        -lopencv_world451
