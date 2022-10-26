#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "facedetect.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    FaceDetect facedetect;

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/qmlMobile/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    //QQmlContext * rootContext = engine.rootContext();
    //rootContext->setContextProperty("FaceDetectClass", &facedetect);

    //engine.rootContext()->setContextProperty("facedetectClass", &facedetect);

    QObject::connect(&facedetect, &FaceDetect::onBtnClickSignal, &facedetect, &FaceDetect::callMeSlot);

    //facedetect.callMeSlot();

    return app.exec();
}
