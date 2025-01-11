import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtLocation 5.15

ApplicationWindow {
    visible: true
    width: 1200
    height: 800
    title: "GCS Telemetry and Control"

    Rectangle {
        id: mainLayout
        anchors.fill: parent
        color: "#ecf0f1"

        // Main Map Display Section
        Map {
            id: mapDisplay
            width: parent.width * 0.7
            height: parent.height * 0.7
            anchors.top: parent.top
            anchors.left: parent.left
            plugin: Plugin { name: "osm" }
            center: QtPositioning.coordinate(37.7749, -122.4194) // Example: San Francisco
            zoomLevel: 10
           // radius: 10

            // Background styling around the map (use a parent Rectangle for border)
            Rectangle {
                anchors.fill: parent
                color: "transparent"
                border.color: "#34495e"
                border.width: 2
                z: -1
            }

            MapQuickItem {
                coordinate: QtPositioning.coordinate(37.7749, -122.4194)
                anchorPoint: Qt.point(16, 16)

                sourceItem: Rectangle {
                    width: 32
                    height: 32
                    color: "red"
                    radius: 16
                    border.color: "white"
                    border.width: 2
                }
            }

            // Mouse handling for zoom
            MouseArea {
                anchors.fill: parent
                onWheel: {
                    if (wheel.angleDelta.y > 0) {
                        mapDisplay.zoomLevel += 1; // Zoom in
                    } else {
                        mapDisplay.zoomLevel -= 1; // Zoom out
                    }
                }
            }
        }

        // Telemetry Data Panel
        Rectangle {
            id: telemetryPanel
            width: parent.width * 0.3
            height: parent.height * 0.7
            color: "#2c3e50"
            anchors.top: parent.top
            anchors.right: parent.right
            border.color: "#34495e"
            border.width: 2
            radius: 10

            ColumnLayout {
                id: telemetryLayout
                anchors.fill: parent
                anchors.margins: 10
                spacing: 10

                Text {
                    text: "Telemetry Data"
                    font.pixelSize: 20
                    color: "white"
                    horizontalAlignment: Text.AlignHCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Text {
                    id: altitudeText
                    text: "Altitude: 120m"
                    color: "white"
                    font.pixelSize: 16
                }

                Text {
                    id: speedText
                    text: "Speed: 45km/h"
                    color: "white"
                    font.pixelSize: 16
                }

                Text {
                    id: batteryText
                    text: "Battery: 85%"
                    color: "white"
                    font.pixelSize: 16
                }
                // Add to Telemetry Data Panel
                Text {
                    id: latitudeText
                    text: "Latitude: " //+ telemetryBackend.latitude
                    color: "white"
                    font.pixelSize: 16
                }

                Text {
                    id: longitudeText
                    text: "Longitude: " //+ telemetryBackend.longitude
                    color: "white"
                    font.pixelSize: 16
                }

                // Update Connections for Map
                Connections {
                    target: telemetryBackend
                    onLocationUpdated: {
                        locationMarker.coordinate = QtPositioning.coordinate(latitude.longitude);
                    }
}

                Button {
                    text: "Pop Out"
                    onClicked: {
                        var telemetryWindow = Qt.createComponent("TelemetryWindow.qml").createObject(mainLayout, {
                            x: 100,
                            y: 100,
                            width: 400,
                            height: 600
                        });
                        if (!telemetryWindow) {
                            console.log("Error creating telemetry window");
                        } else {
                            telemetryPanel.visible = false;
                        }
                    }
                }
            }
        }

        // Command Panel
        Rectangle {
            id: commandPanel
            width: parent.width
            height: parent.height * 0.2
            color: "#34495e"
            anchors.bottom: parent.bottom
            border.color: "#2c3e50"
            border.width: 2

            RowLayout {
                anchors.fill: parent
                anchors.margins: 20
                spacing: 30

                Button {
                    text: "Takeoff"
                    width: 100
                    height: 40
                }

                Button {
                    text: "Land"
                    width: 100
                    height: 40
                }

                Button {
                    text: "Return to Home"
                    width: 150
                    height: 40
                }

                Button {
                    text: "Pause"
                    width: 100
                    height: 40
                }
            }
        }

        // Status Bar
        Rectangle {
            id: statusBar
            width: parent.width
            height: parent.height * 0.1
            color: "#16a085"
            anchors.bottom: commandPanel.top
            border.color: "#1abc9c"
            border.width: 2

            RowLayout {
                anchors.fill: parent
                anchors.margins: 10
                spacing: 20

                Text {
                    id: connectionStatus
                    text: "Connection: Connected"
                    color: "white"
                    font.pixelSize: 16
                }

                Text {
                    id: systemNotification
                    text: "System: All systems operational"
                    color: "white"
                    font.pixelSize: 16
                }
            }
        }
    }
}
