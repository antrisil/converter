import QtQuick

Item {
    width: 640
    height: 480

    Rectangle{
        id: standBy
        width: parent.width
        height:  50
        color: "#aaaaaa"
        border.color: "black"
        border.width: 1

        Text{
            id: standbyText
            color: "#000000"
            text: "STAND BY"
            font.bold: true
            styleColor: "#000000"
            font.pointSize: 20
            anchors.centerIn: parent
        }
    }

    Rectangle{
        id: timmer
        width: parent.width
        height: 50
        anchors.top: standBy.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: standby1
            text: "Timmer :"
            font.pointSize: 20
            anchors.verticalCenter: parent.verticalCenter
            x: 80
        }

        Text{
            id: time
            text: "00:00:00"
            font.pointSize: 20
            anchors.verticalCenter: parent.verticalCenter
            x: 450
        }
    }

    Rectangle{
        id: exit
        width: parent.width
        height: 50
        anchors.top: timmer.bottom
        border.color: "black"
        border.width: 1

        Text{
            id: exitText
            text: "Exit"
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
