#include "crearprodcuto.h"
#include "ui_crearprodcuto.h"

crearProdcuto::crearProdcuto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::crearProdcuto)
{
    ui->setupUi(this);
}

crearProdcuto::~crearProdcuto()
{
    delete ui;
}
