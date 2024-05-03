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

private:
    Ui::Practical_use *ui;
};
#endif // PRACTICAL_USE_H
