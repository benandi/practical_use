#include "practical_use.h"
#include "./ui_practical_use.h"
#include<windows.h>

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

void Practical_use::on_pushButton_2_clicked()
{
    system("regedit");
}


void Practical_use::on_pushButton_3_clicked()
{
    system("Resmon.exe");
}


void Practical_use::on_pushButton_4_clicked()
{
    system("explorer.exe Shell:::{2559a1f3-21d7-11d4-bdaf-00c04f60b9f0}");
}


void Practical_use::on_pushButton_5_clicked()
{
    system("control");
}


void Practical_use::on_pushButton_6_clicked()
{
    //DownloadFiles("https://codeload.github.com/benandi/practical_use/zip/refs/heads/master",argc[0]);
    system("taskmgr");
}

