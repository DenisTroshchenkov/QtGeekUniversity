#include "parsetext.h"

#define MIN(a, b) (a < b) ? a : b

ParseText::ParseText()
{
    text = "";
    preText = "";
    pos = 0;
}

bool ParseText::change(QString istr)
{
    qint32 length = MIN(MIN(text.length(), istr.length()), pos);
    preText = "";
    for (qint32 i = 0; i < length; i++)
    {
        if (text[i] != istr[i])
        {
            pos = i;
            break;
        }
    }
    const QChar *arStr = istr.constData();
    qint32 ppos = 0, lastp = -1;
    bool chg = false; \
    for (qint32 fnd = istr.indexOf("#@", pos);
         fnd != -1 && lastp != pos;
         fnd = istr.indexOf("#@", pos)
         )
    {
        preText.insert(preText.length(), &arStr[ppos], fnd);
                lastp = pos;
        pos = fnd;
        int r = istr.indexOf('@', fnd + 2);
        if (r == -1) {
            r = istr.indexOf('=', fnd + 2);
        }
        int space = istr.indexOf(' ', fnd + 2);
        if ((r < space || space == -1) && r != -1)
            {
                QString exampl = "";
                QString rez = "";
                if (istr.at(r) == '@') {
                    exampl.insert(0, &arStr[fnd + 2], r - fnd - 2);
                    rez = conver(exampl);
                }
                else {
                    exampl.insert(0, &arStr[fnd + 2], r - fnd - 1);
                    int index = 0;
                    rez = exampl + QString::number(expr(exampl, index));
                }
                preText += rez;
                pos = r + 1;
                chg = true;
            }
            preText.insert(preText.length(), &arStr[pos], istr.length() - pos); \
    }
    return chg;
}

QString ParseText::conver(QString example)
{
    QString str = example;
    if (str == "RUB") {
        str = "₽";
    }
    else if (str == "EUR") {
        str = "€";
    }
    else if (str == "UAH") {
        str = "₴";
    }
    else if (str == "USD") {
        str = "$";
    }
    else if (str == "GBP") {
        str = "£";
    }
    else {
        str = "¤";
    }
    return str;
}

double ParseText::expr(QString example,  qint32& index)
{
    double value = 0;
    value = term(example, index);
    while (1) {
        if (example.at(index)=='=') return value;
        else if (example.at(index)=='+') {
            value += term(example, ++index);
        }
        else if (example.at(index)=='-') {
            value -= term(example, ++index);
        }
        else break;
    }
    return value;
}

double ParseText::term(QString example, qint32& index)
{
    double value = 0;
    value = number(example, index);
    while (1) {
        if(example.at(index) == '*') {
            value *= number(example, ++index);
        }
        else if (example.at(index) == '/') {
            value *= number(example, ++index);
        }
        else if (example.at(index) == ')') {
            ++index;
        }
        else break;

    }
    return value;
}

double ParseText::number(QString example, qint32& index)
{
    double value = 0;
    if (example.at(index) == '(') {
        return expr(example, ++index);
    }
    else if (example.at(index) == 'c' || example.at(index) == 's') {
        if (example.mid(index, 4) == "cos(") {
            index += 4;
            int rad = expr(example, ++index);
            return qCos(rad);
        }
        else if (example.mid(index, 4) == "sin(") {
            index += 4;
            int rad = expr(example, ++index);
            return qSin(rad);
        }
    }
    if (!(example.at(index).isDigit())) {
        return 0;
    }
    while (example.at(index).isDigit()) {
        value = 10*value + (example.at(index++).unicode()-'0');
    }
    if (example.at(index)!='.') return value;
    double factor =1.0;
    while (example.at(++index).isDigit()) {
        factor *=0.1;
        value = value + (example.at(index++).unicode()-'0')*factor;
    }
    return value;
}

QString ParseText::getText()
{
    text = preText;
    return text;
}
