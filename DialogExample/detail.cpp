#include "detail.h"

#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QGridLayout>
#include <QTextEdit>

Detail::Detail(QWidget *parent) : QWidget(parent)
{
    nationalLabel = new QLabel(QString::fromLocal8Bit("国家/地区:"));
    nationalComboBox = new QComboBox;
    nationalComboBox->insertItem(0,QString::fromLocal8Bit("中国"));
    nationalComboBox->insertItem(1,QString::fromLocal8Bit("美国"));
    nationalComboBox->insertItem(2,QString::fromLocal8Bit("英国"));

    provinceLabel = new QLabel(QString::fromLocal8Bit("省份："));
    provinceComboBox = new QComboBox;
    provinceComboBox->insertItem(0,QString::fromLocal8Bit("江苏省"));
    provinceComboBox->insertItem(1,QString::fromLocal8Bit("山东省"));
    provinceComboBox->insertItem(2,QString::fromLocal8Bit("浙江省"));

    cityLabel = new QLabel(QString::fromLocal8Bit("城市："));
    cityLineEdit = new QLineEdit;

    introLabel = new QLabel(QString::fromLocal8Bit("个人说明："));
    introTextEdit = new QTextEdit;

    mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);

    mainLayout->addWidget(nationalLabel,0,0);
    mainLayout->addWidget(nationalComboBox,0,1);

    mainLayout->addWidget(provinceLabel,1,0);
    mainLayout->addWidget(provinceComboBox,1,1);

    mainLayout->addWidget(cityLabel,2,0);
    mainLayout->addWidget(cityLineEdit,2,1);

    mainLayout->addWidget(introLabel,3,0);
    mainLayout->addWidget(introTextEdit,3,1);
}
