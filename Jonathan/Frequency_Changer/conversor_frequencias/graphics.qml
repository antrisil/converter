import QtQuick 2.0
import QtQuick.Controls
import QtCharts

Item {
  width: 640
  height: 480
  property int larguraTela: 640
  property int alturaTela: 480
  property bool runtimeUpd: true
  property variant ticks;
  property var positionL;
  property var length;
  property string periodo: tableSelector.currentText

  function removeLabels() {
    var label_strings = axisLabels.categoriesLabels
    while (axisLabels.count) {
      axisLabels.remove(label_strings[0]);
    }
  }

  function addLabels(ticks, max) {
    length = ticks.length;
    positionL = max / (ticks.length - 1);
    for (var i = 0; i < ticks.length; i++) {
      axisLabels.append(ticks[i], positionL * i);
    }
  }

  function switchPeriod(i){
      switch (periodo) {
      case "1M":
        if (i >= 60) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 60;
        }
        break;
      case "5M":
        if (i >= 300) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 300;
        }
        break;
      case "10M":
        if (i >= 600) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 600;
        }
        break;
      case "30M":
        if (i >= 1800) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 1800;
        }
        break;
      case "1H":
        if (i >= 3600) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 3600;
        }
        break;
      case "2H":
        if (i >= 7200) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 7200;
        }
        break;
      case "5H":
        if (i >= 18000) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 18000;
        }
        break;
      case "12H":
        if (i >= 43200) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 43200;
        }
        break;
      case "1D":
        if (i >= 86400) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 86400;
        }
        break;
      case "3D":
        if (i >= 259200) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 259200;
        }
        break;
      case "1W":
        if (i >= 604800) {
          xAxis2.max = lineSeries2.count;
          xAxis2.min = lineSeries2.count - 604800;
        }
        break;
      default:
        return;
      }
  }

  function updateChart(load) {
    lineSeries2.clear()

    for (var i = 0; i < load.length; i++) {
      lineSeries2.append(i, load[i])
        switchPeriod(i);
    }
  }

  function updateChartForperiodo(periodo) {
    var currentTable = tableSelector.currentText;
    var data = db.loadParameter(currentTable);
    updateChart(data);
    switch (periodo) {
    case "1M":
      removeLabels();
      xAxis2.max = 60;
      xAxis.max = 60;
      ticks = ["0", "15", "30", "45", "60"];
      addLabels(ticks, xAxis2.max);


      break;

    case "5M":
      removeLabels();
      xAxis2.max = 300;
      xAxis.max = 300;
      ticks = ["0", "1", "2", "3", "4", "5"];
      addLabels(ticks, xAxis2.max);
      break;
    case "10M":
      removeLabels();
      xAxis2.max = 600;
      xAxis.max = 600;
      ticks = ["0", "2", "4", "6", "8", "10"];
      addLabels(ticks, xAxis2.max);
      break;

    case "30M":
      removeLabels();
      xAxis2.max = 1800;
      xAxis.max = 1800;
      ticks = ["0", "5", "10", "15", "20", "25", "30"];
      addLabels(ticks, xAxis2.max);
      break;

    case "1H":
      removeLabels();
      xAxis2.max = 3600;
      xAxis.max = 3600;
      ticks = ["0", "10", "20", "30", "40", "50", "60"];
      addLabels(ticks, xAxis2.max);
      break;

    case "2H":
      removeLabels();
      xAxis2.max = 7200
      xAxis.max = 7200;
      ticks = ["0", "30", "60", "90", "120"];
      addLabels(ticks, xAxis2.max);
      break;

    case "5H":
      removeLabels();
      xAxis2.max = 18000;
      xAxis.max = 18000;
      ticks = ["0", "1", "2", "3", "4", "5"];
      addLabels(ticks, xAxis2.max);
      break;

    case "12H":
      removeLabels();
      xAxis2.max = 43200
      xAxis.max = 43200;
      ticks = ["0", "2", "4", "6", "8", "10", "12"];
      addLabels(ticks, xAxis2.max);
      break;

    case "1D":
      removeLabels();
      xAxis2.max = 86400
      xAxis.max = 86400;
      ticks = ["0", "4", "8", "12", "16", "20", "24"];
      addLabels(ticks, xAxis2.max);
      break;

    case "3D":
      removeLabels();
      xAxis2.max = 259200
      xAxis.max = 259200;
      ticks = ["0", "12H", "1D", "1D:12H", "2D", "2D:12H", "3D"];
      addLabels(ticks, xAxis2.max);
      break;

    case "1W":
      removeLabels();
      xAxis2.max = 604800
      xAxis.max = 604800;
      ticks = ["1", "2", "3", "4", "5", "6", "7"];
      addLabels(ticks, xAxis2.max)
      break;

    default:
      return;
    }
  }

  Rectangle {
    id: spacework
    anchors.fill: parent

    ChartView {
      id: chartView
      width: parent.width - (parent.width * 0.15)
      height: parent.height - (parent.height * 0.10)
      anchors.horizontalCenter: parent.horizontalCenter
      antialiasing: true

      ValueAxis {
        id: xAxis
      }
      ValueAxis {
        id: yAxis
        max: 200
      }

      LineSeries {
        id: lineSeries
        name: "Load"
        visible: false
        axisX: CategoryAxis {
          id: axisLabels
          min: 0
          max: xAxis.max
          labelsPosition: CategoryAxis.AxisLabelsPositionOnValue
          labelsAngle: 0
        }
        axisY: yAxis
      }

      ValueAxis {
        id: xAxis2
      }
      ValueAxis {
        id: yAxis2
        max: 200
      }

      LineSeries {
        id: lineSeries2
        name: "Load"
        axisX: CategoryAxis {
          id: axisLabels2
          min: xAxis2.min
          max: xAxis2.max
          labelsVisible: true
          labelsPosition: CategoryAxis.AxisLabelsPositionOnValue
          labelsAngle: 0
        }
        axisY: yAxis
      }
    }

    Component.onCompleted: {
      var load = db.getLoad()
      for (var i = 0; i < load.length; ++i) {
        lineSeries2.append(i, load[i])
      }

      db.LoadChanged.connect(function () {
        if (runtimeUpd) {
          var load = db.getLoad()
          updateChart(load)
        }
      })
    }
  }

  //select table

  Rectangle {
    id: select
    x: parent.width - ((parent.width * 0.50) + 75)
    y: parent.height * 0.88
    ComboBox {
      id: tableSelector
      width: 150
      model: []

      Component.onCompleted: {
        updateTableList();
      }

      function updateTableList() {
        var tables = db.selectAllTables()
        model = tables;
      }

      onActivated: {
        var currentTable = tableSelector.currentText;
        var data = db.loadParameter(currentTable);
        if (currentTable === db.getlast) {
          updateChart(data)
          runtimeUpd = true;
        } else {
          runtimeUpd = false;
          updateChart(data);
        }
      }
    }
  }

  //select period

  Rectangle {
    id: selectTime
    x: parent.width - (parent.width * 0.5) - 140
    y: parent.height * 0.88
    ComboBox {
      id: tableSelectorTime
      width: 60
      model: ["1M", "5M", "10M", "30M", "1H", "2H", "5H", "12H", "1D", "3D", "1W"]

      Component.onCompleted: {
        periodo = tableSelectorTime.currentText;
        updateChartForperiodo(periodo);
      }

      onActivated: {
        periodo = tableSelectorTime.currentText;
        updateChartForperiodo(periodo);

      }
    }
  }

  //buttons

  Rectangle {
    id: buttons1
    width: parent.width * 0.1
    height: parent.height * 0.8
    radius: 10
    border.color: "black"
    border.width: 1
    x: parent.width - (parent.width * 1.02);y: parent.height * 0.10

    Image {
      id: return0
      fillMode: Image.PreserveAspectFit
      source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/arrow.jpg"
      rotation: 270
      width: 50
      x: buttons2.width / 2 - 20;y: buttons2.height * 0.25 - 50
    }

    Image {
      id: startop
      fillMode: Image.PreserveAspectFit
      source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/power.png"
      width: 50
      x: buttons2.width / 2 - 20;y: buttons2.height * 0.75

    }
  }

  Rectangle {
    id: buttons2
    width: parent.width * 0.1
    height: parent.height * 0.8
    radius: 10
    border.color: "black"
    border.width: 1
    x: parent.width - (parent.width * 0.08);y: parent.height * 0.10
    Image {
      id: home
      fillMode: Image.PreserveAspectFit
      source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/arrow.jpg"
      rotation: 90
      width: 50
      x: buttons2.width / 2 - 30;y: buttons2.height * 0.25 - 50
    }

    Image {
      id: settingsIcon
      fillMode: Image.PreserveAspectFit
      source: "file:///home/jonathan/Desktop/Jonathan/Frequency_Changer/imagens/enter.png"
      width: 50
      x: buttons2.width / 2 - 30;y: buttons2.height * 0.75

    }
  }
}
