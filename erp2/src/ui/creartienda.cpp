#include "creartienda.h"
#include "ui_creartienda.h"
#include <string>
#include <QMessageBox>
#include <QFileDialog>
crearTienda::crearTienda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::crearTienda)
{
    ui->setupUi(this);
}

crearTienda::~crearTienda()
{
    delete ui;
}

void crearTienda::on_edit_telefono_editingFinished()
{
    QString stringNumero1 = this->ui->edit_telefono->text();
    bool ok = false;
    stringNumero1.toInt(&ok);

    if (!ok)
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("El telefono solo puede tener digitos numericos");
        msgbox->open();
        this->ui->edit_telefono->setText("");
    }
}

std::string crearTienda::conseguirNombre(){
    return this->ui->edit_nombre->text().toStdString();;

}
std::string crearTienda::conseguirdirInt(){
    return this->ui->edit_dirInt->text().toStdString();

}
std::string crearTienda::conseguirdirFis(){
    return this->ui->edit_dirFis->text().toStdString();

}
std::string crearTienda::conseguirTelefono(){
    return this->ui->edit_telefono->text().toStdString();

}
