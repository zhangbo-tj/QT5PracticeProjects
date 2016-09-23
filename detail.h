#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>

class QLabel;
class QComboBox;
class QGridLayout;
class QLineEdit;
class QTextEdit;

class Detail : public QWidget
{
    Q_OBJECT
public:
    explicit Detail(QWidget *parent = 0);

private:
    QLabel *nationalLabel;
    QComboBox *nationalComboBox;

    QLabel *provinceLabel;
    QComboBox *provinceComboBox;

    QLabel* cityLabel;
    QLineEdit* cityLineEdit;

    QLabel *introLabel;
    QTextEdit *introTextEdit;

    QGridLayout *mainLayout;
};

#endif // DETAIL_H
