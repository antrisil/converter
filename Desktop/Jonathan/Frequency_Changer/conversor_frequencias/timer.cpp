#include "timer.h"
#include <unistd.h>

timer::timer(QObject *parent) : QObject(parent)
{
    m_timer.setInterval(5000);
    m_timer.setSingleShot(true);
    connect(&m_timer, &QTimer::timeout, this, &timer::standby);
}

void timer::standby()
{
    system("xset dpms force off");
}

void timer::resetTimer()
{
    m_timer.start();
}

