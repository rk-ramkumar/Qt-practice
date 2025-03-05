#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_btnSubmit_clicked()
{
    QString name = ui->lineEditName->text();

    if (name.isEmpty())
    {
        ui->labelMessage->setText("Please enter your name.");
    }
    else
    {
        ui->labelMessage->setText("Hello, " + name + "!");
    }
}

