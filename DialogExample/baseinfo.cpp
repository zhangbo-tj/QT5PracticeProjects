#include "baseinfo.h"

#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QPushButton>

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

BaseInfo::BaseInfo(QWidget *parent) : QWidget(parent)
{
    /*-左侧-*/
    //用户名
    usernameLabel = new QLabel(QString::fromLocal8Bit("用户名:"));
    usernameLineEdit = new QLineEdit;

    //姓名
    nameLabel = new QLabel(QString::fromLocal8Bit("姓名:"));
    nameLineEdit = new QLineEdit;

    //性别
    sexLabel = new QLabel(QString::fromLocal8Bit("性别:"));
    sexComboBox = new QComboBox;
    sexComboBox->addItem(QString::fromLocal8Bit("女"));
    sexComboBox->addItem(QString::fromLocal8Bit("男"));

    //部门
    departmentLabel = new QLabel(QString::fromLocal8Bit("部门:"));
    departmentTextEdit = new QTextEdit;

    //年龄
    ageLabel = new QLabel(QString::fromLocal8Bit("年龄:"));
    ageLineEdit = new QLineEdit;

    //备注
    otherLabel = new QLabel(QString::fromLocal8Bit("备注:"));
    otherLabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);

    leftLayout = new QGridLayout();
    leftLayout->addWidget(usernameLabel,0,0);
    leftLayout->addWidget(usernameLineEdit,0,1);

    leftLayout->addWidget(nameLabel,1,0);
    leftLayout->addWidget(nameLineEdit,1,1);

    leftLayout->addWidget(sexLabel,2,0);
    leftLayout->addWidget(sexComboBox,2,1);

    leftLayout->addWidget(departmentLabel,3,0);
    leftLayout->addWidget(departmentTextEdit,3,1);

    leftLayout->addWidget(ageLabel,4,0);
    leftLayout->addWidget(ageLineEdit,4,1);

    leftLayout->addWidget(otherLabel,5,0,1,2);
    leftLayout->setColumnStretch(0,1);
    leftLayout->setColumnStretch(1,3);

    /*右侧*/
    headLabel = new QLabel(QString::fromLocal8Bit("头像:"));
    headIconLabel = new QLabel;
    QPixmap icon("head.jpg");
    headIconLabel->setPixmap(icon);
    headIconLabel->resize(icon.width(),icon.height());
    updateButton = new QPushButton(QString::fromLocal8Bit("更新"));

    topRightLayout = new QHBoxLayout();
    topRightLayout->setSpacing(20);
    topRightLayout->addWidget(headLabel);
    topRightLayout->addWidget(headIconLabel);
    topRightLayout->addWidget(updateButton);

    introLabel = new QLabel(QString::fromLocal8Bit("个人说明："));
    introTextEdit = new QTextEdit;

    rightLayout = new QVBoxLayout();
    rightLayout->setMargin(15);
    rightLayout->addLayout(topRightLayout);
    rightLayout->addWidget(introLabel);
    rightLayout->addWidget(introTextEdit);

    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addLayout(leftLayout,0,0);
    mainLayout->addLayout(rightLayout,0,1);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);

}
