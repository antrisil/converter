import QtQuick 2.0
import QtQuick.Controls 2.0

Item {
  width: 400
  height: 300
  visible: true


  ListModel {
    id: myModel
    ListElement {
      name: "timer"
      hours: 0
      minutes: 0
      seconds: 0
    }
    ListElement {
      name: "exit"
    }
  }

  function updateTime(modelIndex, field, value) {
    var element = myModel.get(modelIndex);
    switch (field) {
    case "hours":
      element.hours = value;
      break;
    case "minutes":
      element.minutes = value;
      break;
    case "seconds":
      element.seconds = value;
      break;
    }
    myModel.set(modelIndex, element);
  }

  ListView {
    anchors.fill: parent
    model: myModel

    delegate: Item {
      width: parent.width
      height: 40

      Text {
        text: name
        anchors.centerIn: parent
        y: 200
        font.pixelSize: 18
      }

      // Configuración del temporizador
      Row {
        anchors.centerIn: parent
        spacing: 5
        visible: name === "timer"

        Text {
          text: String(hours).padStart(2, '0') + ":" + String(minutes).padStart(2, '0') + ":" + String(seconds).padStart(2, '0')
          anchors.centerIn: parent
          font.pixelSize: 18
        }

        Row {
          spacing: 5

          Button {
            text: "-"
            onClicked: {
              var currentSeconds = hours * 3600 + minutes * 60 + seconds;
              currentSeconds--;
              updateTime(model.index, "seconds", currentSeconds % 60);
              updateTime(model.index, "minutes", Math.floor(currentSeconds / 60) % 60);
              updateTime(model.index, "hours", Math.floor(currentSeconds / 3600));
            }
            visible: name === "timer"
          }

          Button {
            text: "+"
            onClicked: {
              var currentSeconds = hours * 3600 + minutes * 60 + seconds;
              currentSeconds++;
              updateTime(model.index, "seconds", currentSeconds % 60);
              updateTime(model.index, "minutes", Math.floor(currentSeconds / 60) % 60);
              updateTime(model.index, "hours", Math.floor(currentSeconds / 3600));
            }
            visible: name === "timer"
          }
        }

        Row {
          spacing: 5

          Button {
            text: "-updateTimeH"
            onClicked: {
              updateTime(model.index, "hours", (hours + 23) % 24);
            }
            visible: name === "timer"
          }

          Button {
            text: "+updateTimeH"
            onClicked: {
              updateTime(model.index, "hours", (hours + 1) % 24);
            }
            visible: name === "timer"
          }
        }

        Button {
          text: "-updateTimeM"
          onClicked: {
            updateTime(model.index, "minutes", (minutes + 59) % 60);
          }
          visible: name === "timer"
        }

        Button {
          text: "+updateTimeM"
          onClicked: {
            updateTime(model.index, "minutes", (minutes + 1) % 60);
          }
          visible: name === "timer"
        }
        Button {
          text: "+updateTimeS"
          onClicked: {
            updateTime(model.index, "seconds", (seconds + 1) % 60);
          }
          visible: name === "timer"
        }

      }
    }
  }
}
