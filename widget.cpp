#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget), jiu(9)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
int Widget::addvalue()
{
    jiu++;
    return jiu;
}

int Widget::redvalue()
{
    jiu--;
    return jiu;
}