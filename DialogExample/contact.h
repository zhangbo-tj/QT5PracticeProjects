#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>

class QLabel;
class QLineEdit;
class QCheckBox;
class QGridLayout;

class Contact : public QWidget
{
    Q_OBJECT
public:
    explicit Contact(QWidget *parent = 0);

private:
    QLabel *emailLabel;
    QLabel *addressLabel;
    QLabel *codeLabel;
    QLabel *cellphoneLabel;
    QLabel * phoneLabel;

    QLineEdit *emailLineEdit;
    QLineEdit *addressLineEdit;
    QLineEdit *codeLineEdit;
    QLineEdit *cellphoneLineEdit;
    QCheckBox *acceptMessBox;
    QLineEdit *phoneLineEdit;

    QGridLayout *mainLayout;
};

#endif // CONTACT_H
