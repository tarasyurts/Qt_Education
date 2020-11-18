#ifndef QHOVERSENSITIVEBUTTON_H
#define QHOVERSENSITIVEBUTTON_H


#include <QtWidgets>

class QHoverSensitiveButton : public QPushButton
{
    Q_OBJECT

    bool eventsAllowed{true};
public:
    explicit QHoverSensitiveButton(QWidget *parent = 0);
    void allowEvents(bool);
protected:
    void hoverEnter(QHoverEvent *event);
    bool event(QEvent *event);

signals:

public slots:
};

#endif // QHOVERSENSITIVEBUTTON_H
