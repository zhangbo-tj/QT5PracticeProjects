#include "contact.h"

#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QCheckBox>

Contact::Contact(QWidget *parent) : QWidget(parent)
{
    emailLabel = new QLabel(QString::fromLocal8Bit("电子邮件:"));
    emailLineEdit = new QLineEdit;

    addressLabel = new QLabel(QString::fromLocal8Bit("联系地址："));
    addressLineEdit = new QLineEdit;

    codeLabel = new QLabel(QString::fromLocal8Bit("邮政编码："));
    codeLineEdit = new QLineEdit;

    cellphoneLabel = new QLabel(QString::fromLocal8Bit("移动电话"));
    cellphoneLineEdit = new QLineEdit;
    acceptMessBox = new QCheckBox(QString::fromLocal8Bit("接收留言"));
    acceptMessBox->setCheckState(Qt::Unchecked);

    phoneLabel = new QLabel(QString::fromLocal8Bit("办公电话："));
    phoneLineEdit = new QLineEdit;

    mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);

    mainLayout->addWidget(emailLabel,0,0);
    mainLayout->addWidget(emailLineEdit,0,1);

    mainLayout->addWidget(addressLabel,1,0);
    mainLayout->addWidget(addressLineEdit,1,1);

    mainLayout->addWidget(codeLabel,2,0);
    mainLayout->addWidget(codeLineEdit,2,1);

    mainLayout->addWidget(cellphoneLabel,3,0);
    mainLayout->addWidget(cellphoneLineEdit,3,1);
    mainLayout->addWidget(acceptMessBox,3,2);

    mainLayout->addWidget(phoneLabel,4,0);
    mainLayout->addWidget(phoneLineEdit,4,1);

    mainLayout->setSizeConstraint(QLayout::SetFixedSize);

}
