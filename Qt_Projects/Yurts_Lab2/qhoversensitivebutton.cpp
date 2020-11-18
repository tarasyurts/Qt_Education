#include "qhoversensitivebutton.h"

QHoverSensitiveButton::QHoverSensitiveButton(QWidget *parent) : QPushButton(parent)
{
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
}

void QHoverSensitiveButton::hoverEnter(QHoverEvent *)
{
    if(eventsAllowed) this->move( QRandomGenerator::global()->bounded(0, 350),  QRandomGenerator::global()->bounded(0, 250));
}


bool QHoverSensitiveButton::event(QEvent *event)
{

    switch(event->type())
    {
    case QEvent::HoverEnter:
        hoverEnter(static_cast<QHoverEvent*>(event));
        return true;
    default:
        break;
    }

    return QWidget::event(event);
}


void QHoverSensitiveButton::allowEvents(bool state){
    eventsAllowed = state;
}
