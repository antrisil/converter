import QtQuick
Item {
    visible: true
    property int larguraTela: 640
    property int alturaTela: 480

    Rectangle{
        id: workspace
        anchors.fill: parent

        Loader{
            id: loader
            anchors.fill: parent
        }

        state: "graphicSelect"
        states: [

            State{
                name:"booting"
                PropertyChanges {
                    target: loader
                    source: "booting.qml"

                }
            },

            State{
                name:"monitor"
                PropertyChanges {
                    target: loader
                    source: "MONITOR.qml"

                }
            },

            State{
                name:"settings"
                PropertyChanges {
                    target: loader
                    source: "settings.qml"

                }
            },

            State{
                name:"graphic"
                PropertyChanges {
                    target: loader
                    source: "graphic.qml"

                }
            },

            State{
                name:"graphicSelect"
                PropertyChanges {
                    target: loader
                    source: "graphicSelect.qml"

                }
            },

            State{
                name:"languages"
                PropertyChanges {
                    target: loader
                    source: "languages.qml"

                }
            },

            State{
                name:"standby"
                PropertyChanges {
                    target: loader
                    source: "standby.qml"

                }
            },

            State{
                name:"output"
                PropertyChanges {
                    target: loader
                    source: "output.qml"

                }
            },

            State{
                name:"bypass"
                PropertyChanges {
                    target: loader
                    source: "bypass.qml"

                }
            },


            State{
                name:"metric"
                PropertyChanges {
                    target: loader
                    source: "metric.qml"

                }

            }
        ]

//        MouseArea  {
//            anchors.fill: parent
//            onClicked: {
//                var states =["booting", "monitor", "settings", "graphic", "graphicSelect", "languages", "standby", "output", "bypass", "metric"]
//                var nextIndex = (states.indexOf(parent.state)+1)%states.length
//                parent.state = states[nextIndex]
//            }
//        }
    }
}
