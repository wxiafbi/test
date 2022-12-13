#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int showp();
public slots:
    int addvalue();
    int redvalue();

private:
    Ui::Widget *ui;
    Ui::Widget *p;
    int jiu;
    
};
#endif // WIDGET_H
