#include "practical_use.h"
#include "./ui_practical_use.h"

Practical_use::Practical_use(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Practical_use)
{
    ui->setupUi(this);
}

Practical_use::~Practical_use()
{
    delete ui;
}
