#include "dialog.h"

#include <QStackedWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

Content::Content(QWidget *parent)
    : QFrame(parent)
{
    stack = new QStackedWidget(this);
    stack->setFrameStyle(QFrame::Panel|QFrame::Raised);

    baseInfo = new BaseInfo();
    contact = new Contact();
    detail = new Detail();

    stack->addWidget(baseInfo);
    stack->addWidget(contact);
    stack->addWidget(detail);

    amendButton = new QPushButton(QString::fromLocal8Bit("ÐÞ¸Ä"));
    closeButton = new QPushButton(QString::fromLocal8Bit("¹Ø±Õ"));

    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addStretch(1);
    buttonLayout->addWidget(amendButton);
    buttonLayout->addWidget(closeButton);

    QVBoxLayout *rightLayout = new QVBoxLayout(this);
    rightLayout->setMargin(10);
    rightLayout->setSpacing(6);
    rightLayout->addWidget(stack);
    rightLayout->addLayout(buttonLayout);
}

Content::~Content()
{

}
