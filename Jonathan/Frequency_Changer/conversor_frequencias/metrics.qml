import QtQuick

Item {
    Rectangle{
        id: humidade
        width: parent.width
        height:  50
        color: "#aaaaaa"
        border.color: "black"
        border.width: 1

        Text{
            id: humidadetext
            color: "#000000"
            text: "METRICS"
            font.bold: true
            styleColor: "#000000"
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
