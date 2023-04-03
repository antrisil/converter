#include "dbmanager.h"

QVector < double > load;
QVector < double > load2;
pcan * can = new pcan;
QMutex mutex;
QDateTime cdt = QDateTime::currentDateTime();
QVector < QString > dataehora;
QString last = cdt.toString("yyyy/MM/dd_hh:mm:ss");
DbManager::DbManager() {
  mutex.lock();
  m_db = QSqlDatabase::addDatabase("QSQLITE");
  m_db.setDatabaseName("/home/jonathan/Desktop/Jonathan/SQL/teste.db");
  if (!m_db.open()) {
    qDebug() << "Error: connection with database failed";
  } else {
    qDebug() << "Database: connection ok";
  }
  mutex.unlock();
}

void DbManager::newSession() {

  QSqlQuery query(m_db);
  query.prepare("INSERT INTO startoff(id_sesion,start_reason,end_reason) VALUES (NULL ,'ff','ff');");
  if (query.exec()) {
    qDebug("insertss succesfully added");
  } else {
    qDebug() << "insertss error:" << query.lastError();
  }
}

void DbManager::insertSession() {
  QSqlQuery query(m_db);
  query.prepare("SELECT (id_sesion) from startoff order by id_sesion DESC LIMIT 1");
  if (query.exec()) {
    while (query.next()) {
      int id_sesion = query.value("id_sesion").toInt();
      qDebug() << id_sesion;
      if (id_sesion == 1) {
        query.prepare("insert into def_settings(serial_number, language0, output, standby) values (" + QString::number(can -> getRunSerialNum()) + ", NULL, NULL, NULL)");
        if (query.exec()) {
          qDebug("insert into def_settings success");
        } else {
          qDebug() << "def_settings error:" << query.lastError();
        }
        query.prepare("insert into settings(def_serial_number, language0, output, standby) values (" + QString::number(can -> getRunSerialNum()) + ", NULL, NULL, NULL)");
        if (query.exec()) {
          qDebug("insert into settings success");
        } else {
          qDebug() << "settings error:" << query.lastError();
        }

      } else {
        qDebug("id_sesion != 1");
      }
    }
  } else {
    qDebug() << "testing error:" << query.lastError();
  }
}

void DbManager::createTable() {
  QSqlQuery query(m_db);
  query.prepare("CREATE TABLE \"" + cdt.toString("yyyy/MM/dd_hh:mm:ss") + "\"(id_sesion_ss int, datatime datetime, serialnumber int, Vil1 int, Vil2 int, vil3 int, iil1 int, iil2 int, iil3 int, vol1 int, vol2 int,"
    "vol3 int, iol1 int, iol2 int, iol3 int, temp float, timee time, rh float, load float, FOREIGN KEY (serialnumber) REFERENCES def_settings(serial_number), FOREIGN KEY (id_sesion_ss) REFERENCES startoff(id_sesion));");
  if (query.exec()) {
    qDebug("table sucessfully created");
  } else {
    qDebug() << "testing error:" << query.lastError();
  }
}

void DbManager::dropOlderTable() {
  QSqlQuery query(m_db);
  query.prepare("SELECT name FROM sqlite_schema WHERE type='table' AND name like '2%' LIMIT 1");
  if (query.exec()) {
    while (query.next()) {
      QString droping = query.value(0).toString();
      query.prepare("drop table \"" + droping + "\"");
    }
    if (query.exec()) {
      qDebug("droping sucessfully created");
    } else {
      qDebug() << "droping error:" << query.lastError();
    }
  } else {
    qDebug() << "droping error:" << query.lastError();
  }
}

void DbManager::keep100rows() {
  QSqlQuery query(m_db);
  query.prepare("CREATE TRIGGER \"" + cdt.toString("yyyy/MM/dd_hh:mm:ss") + "\" AFTER INSERT ON \"" + cdt.toString("yyyy/MM/dd_hh:mm:ss") + "\" BEGIN delete from \"" + cdt.toString("yyyy/MM/dd_hh:mm:ss") +
    "\" where datatime =(select min(datatime) from \"" + cdt.toString("yyyy/MM/dd_hh:mm:ss") + "\" ) and (select count(*) from \"" + cdt.toString("yyyy/MM/dd_hh:mm:ss") + "\" )= 253200; END;");
  if (query.exec()) {
    qDebug("trigger succesfully added");
  } else {
    qDebug() << "trigger error:" << query.lastError();
  }
}

QVector < QString > DbManager::selectAllTables() {
  QSqlQuery query(m_db);
  query.prepare("SELECT name FROM sqlite_schema  WHERE type='table' AND name like '2%' order by name DESC");
  if (query.exec()) {
    while (query.next()) {
      dataehora.append(query.value(0).toString());
      emit AllTablesChanged();
    }
  } else {
    qDebug() << "all_tables" << query.lastError();
  }
  return dataehora;
}

void DbManager::insertIntoTable() {
  QSqlQuery query(m_db);
  while (1) {
    QDateTime cdt2 = QDateTime::currentDateTime();
    QTime timee(0, 0, 0);
    timee = timee.addSecs(can -> getUnitRunTime());
    int x = QRandomGenerator::global() -> bounded(100);
    query.prepare("INSERT INTO \"" + cdt.toString("yyyy/MM/dd_hh:mm:ss") + "\"(datatime, id_sesion_ss, serialnumber, Vil1, Vil2, vil3, iil1, iil2, iil3, vol1, vol2, vol3, iol1, iol2, iol3, timee, temp, rh, load) "
      "VALUES(\"" + cdt2.toString("yyyy/MM/dd_hh:mm:ss") + "\", (SELECT (id_sesion) from startoff order by id_sesion DESC LIMIT 1), " + QString::number(can -> getRunSerialNum()) + ", " + QString::number(can -> getAB() / 10.0) + ", " +
      QString::number(can -> getBC() / 10.0) + ", " + QString::number(can -> getCA() / 10.0) + ", " + QString::number(can -> getRectPhaseACur() / 10.0) + ", " + QString::number(can -> getRectPhaseBCur() / 10.0) + ", " +
      QString::number(can -> getRectPhaseCCur() / 10.0) + ", " + QString::number(can -> getInvPhaseAVolt() / 10.0) + ", " + QString::number(can -> getInvPhaseBVolt() / 10.0) + ", " + QString::number(can -> getInvPhaseCVolt() / 10.0) +
      ", " + QString::number(can -> getInvPhaseACur()) + ", " + QString::number(can -> getInvPhaseBCur()) + ", " + QString::number(can -> getInvPhaseCCur()) + ", \"" + timee.toString("hh:mm:ss") +
      "\"," + QString::number(can -> getTemp() / 10.0) + ", " + QString::number(can -> getHumidity() / 10.0) + ", " + QString::number(x) + ");");
    if (query.exec()) {
      qDebug("row succesfully added");
    } else {
      qDebug() << "insertInto error:" << query.lastError();
    }
    sleep(1);
  }
}

void DbManager::selectLoad() {
  QSqlQuery query(m_db);
  while (1) {
    sleep(1);
    query.prepare("SELECT load from \"" + cdt.toString("yyyy/MM/dd_hh:mm:ss") + "\" order by datatime DESC limit 1; ");
    if (query.exec()) {
      while (query.next()) {
        load.append(query.value(0).toFloat());
        emit LoadChanged();
      }
    } else {
      qDebug() << "select error: " << query.lastError();
    }
  }
}

QString DbManager::lastOne() {
  last = cdt.toString("yyyy/MM/dd_hh:mm:ss");
}

QString DbManager::deleteFirst() {
  load.takeFirst();
  return "1";
}

QVector < double > DbManager::loadParameter(const QString & currentTable) {
  QSqlQuery query(m_db);
  query.prepare("SELECT load from \"" + currentTable + "\" order by datatime DESC");
  load2.clear();
  if (query.exec()) {
    while (query.next()) {
      load2.append(query.value(0).toFloat());
    }
    emit LoadChanged2();
  } else {
    qDebug() << "getting load error: " << query.lastError();
  }
  return load2;
}

QVector < double > DbManager::getLoad() const {
  qDebug() << load;
  return load;
}

QVector < double > DbManager::getLoad2() const {
  return load2;
}

QString DbManager::getlast() const {
  return last;

}
