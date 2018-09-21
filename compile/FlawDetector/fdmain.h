#ifndef FDMAIN_H
#define FDMAIN_H

#include <QWidget>

namespace Ui {
class fdmain;
}

class fdmain : public QWidget
{
    Q_OBJECT

public:
    explicit fdmain(QWidget *parent = 0);
    ~fdmain();

private:
    Ui::fdmain *ui;
};

#endif // FDMAIN_H
