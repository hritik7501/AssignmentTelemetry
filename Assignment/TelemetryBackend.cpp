#include "TelemetryBackend.h"

// Constructor
TelemetryBackend::TelemetryBackend(QObject *parent)
    : QObject(parent),
    m_connectionStatus("Disconnected"),
    m_batteryLevel(0),
    m_altitude(0.0),
    m_speed(0.0) {}

// Getter for connection status
QString TelemetryBackend::connectionStatus() const {
    return m_connectionStatus;
}

// Setter for connection status
void TelemetryBackend::setConnectionStatus(const QString &status) {
    if (m_connectionStatus != status) {
        m_connectionStatus = status;
        emit connectionStatusChanged();
    }
}

// Getter for battery level
int TelemetryBackend::batteryLevel() const {
    return m_batteryLevel;
}

// Setter for battery level
void TelemetryBackend::setBatteryLevel(int level) {
    if (m_batteryLevel != level) {
        m_batteryLevel = level;
        emit batteryLevelChanged();
    }
}

// Getter for altitude
double TelemetryBackend::altitude() const {
    return m_altitude;
}

// Setter for altitude
void TelemetryBackend::setAltitude(double altitude) {
    if (qFuzzyCompare(m_altitude, altitude) == false) {
        m_altitude = altitude;
        emit altitudeChanged();
    }
}

// Getter for speed
double TelemetryBackend::speed() const {
    return m_speed;
}

// Setter for speed
void TelemetryBackend::setSpeed(double speed) {
    if (qFuzzyCompare(m_speed, speed) == false) {
        m_speed = speed;
        emit speedChanged();
    }
}

// Simulate telemetry updates (for testing purposes)
void TelemetryBackend::simulateTelemetryUpdate() {
    setConnectionStatus("Connected");
    setBatteryLevel((m_batteryLevel + 10) % 101); // Cycle battery level
    setAltitude(m_altitude + 10.5);               // Increment altitude
    setSpeed(m_speed + 1.2);                      // Increment speed
}
