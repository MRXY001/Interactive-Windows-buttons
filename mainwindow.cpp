#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setFixedSize(550, 500);

    InteractiveButtonBase* btn = new InteractiveButtonBase(this);
    btn->setGeometry(300, 300, 100, 100);

    WinMinButton *min_btn = new WinMinButton(this);
    min_btn->setGeometry(400, 10, 32, 32);
    min_btn->setWaterRipple();

    WinMaxButton *max_btn = new WinMaxButton(this);
    max_btn->setGeometry(432, 10, 32, 32);
    max_btn->setWaterRipple();

    WinRestoreButton* res_btn = new WinRestoreButton(this);
    res_btn->setGeometry(464, 10, 32, 32);
    res_btn->setWaterRipple();

    WinCloseButton* close_btn = new WinCloseButton(this);
    close_btn->setGeometry(496, 10, 32, 32);
    close_btn->setWaterRipple();
    close_btn->setBgColor(Qt::black, Qt::red);
}
