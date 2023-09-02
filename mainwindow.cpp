#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "enseignant.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_CIN->setValidator(new QIntValidator(11111111,99999999,this));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Enseignant e;
    e.setcin(ui->lineEdit_CIN->text());
    e.setprenom(ui->lineEdit_Prenom->text());
    e.setnom(ui->lineEdit_Nom->text());
    Dialog d;
    d.setEnseignant(e);
    d.exec();

}
