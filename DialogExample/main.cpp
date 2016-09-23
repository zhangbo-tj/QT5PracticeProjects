#include <QApplication>

#include "dialog.h"
#include <QSplitter>
#include <QListWidget>
#include <QFont>
#include <QTextCodec>

int main(int argc, char *argv[])
{
//    QTextCodec *codec = QTextCodec::codecForName("GBK");
//    QTextCodec::setCodecForLocale(codec);

    QApplication a(argc, argv);

    QFont font("AR PL KaitiM GB",12);
    a.setFont(font);

    QSplitter *mainSplitter = new QSplitter(Qt::Horizontal,0);
    mainSplitter->setOpaqueResize(true);

    QListWidget *list = new QListWidget(mainSplitter);
    list->insertItem(0,QString::fromLocal8Bit("基本信息"));
    list->insertItem(1,QString::fromLocal8Bit("联系方式"));
    list->insertItem(2,QString::fromLocal8Bit("详细资料"));

    Content* content = new Content(mainSplitter);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),
                     content->stack,SLOT(setCurrentIndex(int)));

    mainSplitter->setWindowTitle(QString::fromLocal8Bit("修改用户资料"));
    mainSplitter->setMinimumSize(mainSplitter->minimumSize());
    mainSplitter->setMaximumSize(mainSplitter->maximumSize());
    mainSplitter->show();

    return a.exec();
}
