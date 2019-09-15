#ifndef PARSETEXT_H
#define PARSETEXT_H
#include <QString>
#include <QMessageBox>
#include <QtMath>

class ParseText
{
public:
    ParseText();
    bool change(QString);
    QString conver(QString);
    double expr(QString, qint32&);
    double term(QString, qint32&);
    double number(QString, qint32&);
    QString getText();
private:
    QString text;
    QString preText;
    qint32 pos;
};

#endif // PARSETEXT_H
