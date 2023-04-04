cmake_minimum_required(VERSION 3.16)

project(conversor_frequencias VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Concurrent)
find_package(Qt6 REQUIRED COMPONENTS Charts Core Gui Qml Quick Sql)
find_package(Qt6 6.2 COMPONENTS Quick SerialBus REQUIRED)
find_package(Qt6 REQUIRED COMPONENTS Sql)
find_library(SOCKETCAN_LIB socketcan)


qt_add_executable(appconversor_frequencias
    main.cpp
    dbmanager.h
    dbmanager.cpp
    includes.h
    pcan.h
    pcan.cpp
    timer.cpp
    timer.h
)

qt_add_qml_module(appconversor_frequencias
    URI conversor_frequencias
    VERSION 1.0
    QML_FILES main.qml
    QML_FILES booting.qml
    QML_FILES languages.qml
    QML_FILES metric.qml
    QML_FILES MONITOR.qml
    QML_FILES output.qml
    QML_FILES settings.qml
    QML_FILES standby.qml
    QML_FILES temperature.qml
    QML_FILES testando.qml
    QML_FILES grafic.qml
    QML_FILES bypass.qml
    QML_FILES standbytest.qml
)

set_target_properties(appconversor_frequencias PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appconversor_frequencias PUBLIC
    Qt::Charts
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
    Qt::Sql
    Qt::Concurrent
    Qt6::SerialBus
    socketcan
)

install(TARGETS appconversor_frequencias
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
