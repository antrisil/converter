import QtQuick

Item {
    width: 640
    height: 480

    Rectangle{
        id: settings
        width: parent.width
        height:  50
        color: "#aaaaaa"
        border.color: "black"
        border.width: 1

        Text{
            id: settingtext
            color: "#000000"
            text: "MENU"
            font.bold: true
            styleColor: "#000000"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: home
        width: parent.width
        height: 50
        anchors.top: settings.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: homeText
            text: "Home"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: language
        width: parent.width
        height: 50
        anchors.top: home.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: settings1
            text: "Language"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: output
        width: parent.width
        height: 50
        anchors.top: language.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: settings2
            text: "Output"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: temperature
        width: parent.width
        height: 50
        anchors.top: output.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: settings3
            text: "Metrics"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: bypass
        width: parent.width
        height: 50
        anchors.top: temperature.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: settings4
            text: "Bypass"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: standby
        width: parent.width
        height: 50
        anchors.top: bypass.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: settings5
            text: "Stand By"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: maintenance
        width: parent.width
        height: 50
        anchors.top: standby.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: settings6
            text: "Maintenance"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: buttons1
        width:80
        height: alturaTela - 100
        radius: 10
        border.color: "black"
        border.width: 1
        x: -20; y: 50

        Image {
            id: arrow
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/arrow.jpg"
            width: 50
            x: 25; y:50
            transformOrigin: Item.Center
            rotation: 270
        }

        Image {
            id: startop
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/power.png"
            width: 50
            x: 25; y:290
        }
    }

    Rectangle{
        id: buttons2
        width:80
        height: alturaTela - 100
        radius: 10
        border.color: "black"
        border.width: 1
        x: larguraTela-60; y: 50

        Image {
            id: arrow2
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/arrow.jpg"
            width: 50
            x: 5; y:50
            transformOrigin: Item.Center
            rotation: 90
        }

        Image {
            id: settingsIcon
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/enter.png"
            width: 50
            x: 5; y:290
        }
    }

}
