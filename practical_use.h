#ifndef PRACTICAL_USE_H
#define PRACTICAL_USE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Practical_use;
}
QT_END_NAMESPACE

class Practical_use : public QMainWindow
{
    Q_OBJECT

public:
    Practical_use(QWidget *parent = nullptr);
    ~Practical_use();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Practical_use *ui;
};
#endif // PRACTICAL_USE_H
