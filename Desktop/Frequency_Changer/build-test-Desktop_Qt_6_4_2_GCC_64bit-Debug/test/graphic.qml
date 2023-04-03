import QtQuick
import QtCharts 2.3
import QtQuick.Controls

Item {
    width: 640
    height: 480
    property int larguraTela: 640
    property int alturaTela: 480

    Rectangle{
        id: spacework
        anchors.fill: parent
        ChartView {
            id: chartView
            width: 580
            height: 420
            anchors.horizontalCenter: parent.horizontalCenter
            antialiasing: true



            axes: [
                ValueAxis {
                    id: xAxis
                    min: 0
                    max: 60
                    tickCount: 5
                },
                ValueAxis {
                    id: yAxis
                    min: 0
                    max: 200
                    tickCount: 5
                }
            ]

        }
        Component.onCompleted: {
            var load = dbi.getloadd();
            var lineSeries = chartView.createSeries(ChartView.SeriesTypeLine, "Load", xAxis, yAxis)

            lineSeries.pointsVisible = true;
            for (var i = 0; i < load.length; ++i){
                lineSeries.append(i, load[i]);
                console.log(load);
                console.log(i);
                console.log(load[i]);
            }
            function updateChart(load) {
                var lineSeries = chartView.series(0);

                lineSeries.clear();

                for (var i = 0; i < load.length; ++i){
                    lineSeries.append(i, load[i]);
                }
            }
            dbi.LoaddChanged.connect(function() {
                    var load = dbi.getloadd();
                    updateChart(load);
                });
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
            id: return0
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/return.png"
            width: 50
            x: 25; y:50
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
            id: home
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/inicio.png"
            width: 50
            x: 5; y:50
        }

        Image {
            id: settingsIcon
            fillMode: Image.PreserveAspectFit
            source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/changedate.png"
            width: 50
            x: 5; y:290

        }
    }
}
