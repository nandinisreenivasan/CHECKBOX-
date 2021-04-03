#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"option 1 is checked\n";
    }
    else
    {
        stream<<"option 1 is unchecked\n";
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"option 2 is checked\n";
    }
    else
    {
        stream<<"option 2 is unchecked\n";
    }
}

void MainWindow::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_3->isChecked())
    {
        stream<<"option 3 is checked\n";
    }
    else
    {
        stream<<"option 3 is unchecked\n";
    }
}
