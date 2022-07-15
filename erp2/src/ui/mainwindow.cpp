#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./../lib/include/producto.h"
#include "./../lib/include/tienda.h"
#include "./../lib/include/excepcionProductoNoExiste.h"
#include "./../lib/include/excepcionProductoYaExiste.h"
#include "./../lib/include/excepcionTipoIncorrecto.h"
#include "creartienda.h"
#include <string>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nuevaTienda = new TP3::Tienda();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete nuevaTienda;
}


void MainWindow::on_boton_CrearTienda_clicked()
{
    crearTienda crearTienda(this);
    int result = crearTienda.exec();

    if (crearTienda.conseguirNombre()=="" || crearTienda.conseguirdirInt()=="" ||crearTienda.conseguirdirFis()=="" ||crearTienda.conseguirTelefono()==""){
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Error al crear la tienda\
                         Todos los datos deben estar completados");
        msgbox->open();
        return;
    }

    if(result==QDialog::Accepted){
        std::string nombre = crearTienda.conseguirNombre();
        std::string dirInt = crearTienda.conseguirdirInt();
        std::string dirFis = crearTienda.conseguirdirFis();
        std::string telefono = crearTienda.conseguirTelefono();
        nuevaTienda = new TP3::Tienda(nombre,dirInt,dirFis,telefono);
        QString nombreVisible = QString::fromStdString(nombre);
        this->ui->txt_Nombre->setText(nombreVisible);
        QString dirIntVisible = QString::fromStdString(dirInt);
        this->ui->txt_Dinternet->setText(dirIntVisible);
        QString dirFisVisible = QString::fromStdString(dirFis);
        this->ui->txt_Dfisica->setText(dirFisVisible);
        QString telefonoVisible = QString::fromStdString(telefono);
        this->ui->txt_telefono->setText(telefonoVisible);
    }

}


void MainWindow::on_boton_Agregar_clicked()
{

}


void MainWindow::on_boton_Eliminar_clicked()
{

}


void MainWindow::on_boton_Modificar_clicked()
{

}

