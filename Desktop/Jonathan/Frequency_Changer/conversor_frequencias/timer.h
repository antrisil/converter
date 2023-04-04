#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QTimer>
#include <includes.h>

class timer : public QObject
{
    Q_OBJECT
public:
    explicit timer(QObject *parent = nullptr);

signals:
    void userActivity();

public slots:
    void standby();
    void resetTimer();

private:
    QTimer m_timer;
};

#endif // TIMER_H
