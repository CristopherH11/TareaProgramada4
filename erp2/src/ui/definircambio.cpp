#include "definircambio.h"
#include "ui_definircambio.h"

definirCambio::definirCambio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::definirCambio)
{
    ui->setupUi(this);
}

definirCambio::~definirCambio()
{
    delete ui;
}

std::string definirCambio::conseguirCambio(){
    return this->ui->editCambio->text().toStdString();
}
