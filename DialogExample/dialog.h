#ifndef DIALOG_H
#define DIALOG_H

#include <QFrame>
#include <QStackedWidget>
#include <QPushButton>

#include "baseinfo.h"
#include "contact.h"
#include "detail.h"

class Content : public QFrame
{
    Q_OBJECT

public:
    Content(QWidget *parent = 0);
    ~Content();

public:
    QStackedWidget* stack;
    QPushButton* amendButton;
    QPushButton* closeButton;

    BaseInfo *baseInfo;
    Contact *contact;
    Detail *detail;
};

#endif // DIALOG_H
