#include "mainwindow.h"
#include "ui_mainwindow.h"

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

int firstNum, secondNum, res;

void MainWindow::on_plusBTN_clicked()
{
    firstNum = ui->txtfirstNum->text().toInt();
    secondNum = ui->txtsecondNum->text().toInt();
    res = firstNum + secondNum;
    ui->txtResults->setText(QString::number(res));
}


void MainWindow::on_minusBTN_clicked()
{
    firstNum = ui->txtfirstNum->text().toInt();
    secondNum = ui->txtsecondNum->text().toInt();
    res = firstNum - secondNum;
    ui->txtResults->setText(QString::number(res));
}


void MainWindow::on_mulBTN_clicked()
{
    firstNum = ui->txtfirstNum->text().toInt();
    secondNum = ui->txtsecondNum->text().toInt();
    res = firstNum * secondNum;
    ui->txtResults->setText(QString::number(res));
}


void MainWindow::on_devideBTN_clicked()
{
    firstNum = ui->txtfirstNum->text().toInt();
    secondNum = ui->txtsecondNum->text().toInt();
    res = firstNum / secondNum;
    ui->txtResults->setText(QString::number(res));
}

