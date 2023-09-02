#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setEnseignant(Enseignant e)
{
    ui->lineEdit_CIND->setText(e.get_cin());
    ui->lineEdit_PrenomD->setText(e.get_prenom());
    ui->lineEdit_NomD->setText(e.get_nom());


}
