import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id: telemetryWindow
    width: 400
    height: 600

    Rectangle {
        anchors.fill: parent
        color: "#2c3e50"
        border.color: "#34495e"
        border.width: 2
        radius: 10

        ColumnLayout {
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
                id: altitudeTextPopOut
                text: "Altitude: 120m"
                color: "white"
                font.pixelSize: 16
            }

            Text {
                id: speedTextPopOut
                text: "Speed: 45km/h"
                color: "white"
                font.pixelSize: 16
            }

            Text {
                id: batteryTextPopOut
                text: "Battery: 85%"
                color: "white"
                font.pixelSize: 16
            }
        }
    }
}


