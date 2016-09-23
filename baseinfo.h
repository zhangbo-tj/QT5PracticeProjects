#ifndef BASEINFO_H
#define BASEINFO_H

#include <QWidget>

class QLabel;
class QLineEdit;
class QComboBox;
class QTextEdit;
class QPushButton;

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;

class BaseInfo : public QWidget
{
    Q_OBJECT
public:
    explicit BaseInfo(QWidget *parent = 0);

private:

    //左侧
    QLabel *usernameLabel;
    QLabel *nameLabel;
    QLabel *sexLabel;
    QLabel *departmentLabel;
    QLabel *ageLabel;
    QLabel *otherLabel;
    QLineEdit *usernameLineEdit;
    QLineEdit *nameLineEdit;
    QComboBox *sexComboBox;
    QTextEdit *departmentTextEdit;
    QLineEdit *ageLineEdit;
    QGridLayout *leftLayout;

    //右侧
    QLabel *headLabel;
    QLabel *headIconLabel;
    QPushButton *updateButton;
    QHBoxLayout *topRightLayout;

    QLabel *introLabel;
    QTextEdit *introTextEdit;
    QVBoxLayout *rightLayout;
};

#endif // BASEINFO_H
