#include "crearproducto.h"
#include "ui_crearproducto.h"
#include "QMessageBox"

crearProducto::crearProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::crearProducto)
{
    ui->setupUi(this);
}

crearProducto::~crearProducto()
{
    delete ui;
}

void crearProducto::on_edit_ID_editingFinished()
{
    QString stringNumero1 = this->ui->edit_ID->text();
    bool ok = false;
    stringNumero1.toInt(&ok);

    if (!ok)
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("El ID solo puede tener digitos numericos");
        msgbox->open();
        this->ui->edit_ID->setText("");
    }
}


void crearProducto::on_edit_Existencias_editingFinished()
{
    QString stringNumero1 = this->ui->edit_Existencias->text();
    bool ok = false;
    stringNumero1.toInt(&ok);

    if (!ok)
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Las existencias solo puede tener digitos numericos");
        msgbox->open();
        this->ui->edit_Existencias->setText("");
    }
}

std::string crearProducto::conseguirNombre(){
    return ui->edit_NombrePro->text().toStdString();

}

int crearProducto::conseguirID(){
    return ui->edit_ID->text().toInt();

}

int crearProducto::conseguirExistencias(){
    return ui->edit_Existencias->text().toInt();

}
