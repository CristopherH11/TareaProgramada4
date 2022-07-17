#include "elegirmodificar.h"
#include "ui_elegirmodificar.h"

elegirModificar::elegirModificar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::elegirModificar)
{
    ui->setupUi(this);
}

elegirModificar::~elegirModificar()
{
    delete ui;
}

void elegirModificar::on_botonElegirNombre_clicked()
{
    this->eleccion=1;
    this->close();
}


void elegirModificar::on_botonElegirExistencias_clicked()
{
    this->eleccion=2;
    this->close();
}

int elegirModificar::conseguirEleccion(){
    return this->eleccion;
}
