#include "widget.h"
#include "ui_widget.h"
#include <qdebug.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget),jiu(22)
{
    ui->setupUi(this,jiu);
}

Widget::~Widget()
{
    delete ui;
}
int Widget::showp()
{
    jiu = 8;
    return jiu;
}
int Widget::addvalue()
{
    jiu++;
    ui->lcdNumber->close();
    ui->lcdNumber->show();
    ui->lcdNumber->display(jiu);
    qDebug() << jiu;
    return jiu;
}

int Widget::redvalue()
{
    jiu--;
    ui->lcdNumber->close();
    ui->lcdNumber->show();
    ui->lcdNumber->display(jiu);
    qDebug() << jiu;
    return jiu;
}
