#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "TelemetryBackend.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    TelemetryBackend telemetryBackend;
    engine.rootContext()->setContextProperty("telemetryBackend", &telemetryBackend);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
                         if (!obj && url == objUrl)
                             QCoreApplication::exit(-1);
                     }, Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
