#include "dbmanager.h"

#include "pcan.h"

#include <QGuiApplication>

#include <QQmlApplicationEngine>

//constructors

DbManager * db = new DbManager();
pcan * pcan_ = new pcan();

//methods to main
void _pcan() {
  QString errorString;
  can_do_stop("can0");
  can_set_bitrate("can0", 250000);
  can_do_start("can0");
  QCanBusDevice * device = QCanBus::instance() -> createDevice(QStringLiteral("socketcan"), QStringLiteral("can0"), & errorString);
  if (!device) {
    qDebug() << errorString;
    qDebug() << "error";
  } else {
    qDebug() << "all good";
    device -> setConfigurationParameter(QCanBusDevice::BitRateKey, QVariant::fromValue(250000));
    device -> connectDevice();
    pcan_ -> write(device);
    pcan_ -> receive(device);
  }
}

void dbmanager() {
  db -> newSession();
  db -> insertSession();
  db -> createTable();
  db -> dropOlderTable();
  db -> keep100rows();
  db -> insertIntoTable();

}

void _db_() {
  //    db->lastOne();
  db -> selectLoad();
}

int main(int argc, char * argv[]) {

  //  Threads
  QtConcurrent::run(_pcan);
  QtConcurrent::run(dbmanager);
  QtConcurrent::run(_db_);

  // Qt Charts uses Qt Graphics View Framework for drawing, therefore QApplication must be used.
  QApplication app(argc, argv);
  QQuickView viewer;
  viewer.engine() -> rootContext() -> setContextProperty("pcan", pcan_);
  viewer.engine() -> rootContext() -> setContextProperty("db", db);
  viewer.setSource(QUrl::fromLocalFile("/home/jonathan/Desktop/Jonathan/Frequency_Changer/conversor_frequencias/main.qml"));
//  system("xset dpms force off");

  // The following are needed to make examples run without having to install the module
  // in desktop environments.
  #ifdef Q_OS_WIN
  QString extraImportPath(QStringLiteral("%1/../../../../%2"));
  #else
  QString extraImportPath(QStringLiteral("%1/../../../%2"));
  #endif
  viewer.engine() -> addImportPath(extraImportPath.arg(QGuiApplication::applicationDirPath(),
    QString::fromLatin1("qml")));
  QObject::connect(viewer.engine(), & QQmlEngine::quit, & viewer, & QWindow::close);

  viewer.setTitle(QStringLiteral("Test"));
  viewer.setSource(QUrl("/home/jonathan/Desktop/Jonathan/Frequency_Changer/conversor_frequencias/main.qml"));
  viewer.setProperty("width", 640);
  viewer.setProperty("height", 480);
  viewer.setResizeMode(QQuickView::SizeRootObjectToView);
  viewer.show();

  return app.exec();
}
