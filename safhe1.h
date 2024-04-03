#ifndef SAFHE1_H
#define SAFHE1_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class safhe1; }
QT_END_NAMESPACE

class safhe1 : public QMainWindow
{
    Q_OBJECT

public:
    safhe1(QWidget *parent = nullptr);
    ~safhe1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::safhe1 *ui;
};
#endif // SAFHE1_H
