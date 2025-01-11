#ifndef TELEMETRYBACKEND_H
#define TELEMETRYBACKEND_H

#include <QObject>
#include <QDebug>

class TelemetryBackend : public QObject {
    Q_OBJECT

    Q_PROPERTY(QString connectionStatus READ connectionStatus WRITE setConnectionStatus NOTIFY connectionStatusChanged)
    Q_PROPERTY(int batteryLevel READ batteryLevel WRITE setBatteryLevel NOTIFY batteryLevelChanged)
    Q_PROPERTY(double altitude READ altitude WRITE setAltitude NOTIFY altitudeChanged)
    Q_PROPERTY(double speed READ speed WRITE setSpeed NOTIFY speedChanged)

public:
    explicit TelemetryBackend(QObject *parent = nullptr);

    QString connectionStatus() const;
    void setConnectionStatus(const QString &status);

    int batteryLevel() const;
    void setBatteryLevel(int level);

    double altitude() const;
    void setAltitude(double altitude);

    double speed() const;
    void setSpeed(double speed);

    Q_INVOKABLE void simulateTelemetryUpdate();

signals:
    void connectionStatusChanged();
    void batteryLevelChanged();
    void altitudeChanged();
    void speedChanged();

private:
    QString m_connectionStatus;
    int m_batteryLevel;
    double m_altitude;
    double m_speed;
};

#endif // TELEMETRYBACKEND_H
