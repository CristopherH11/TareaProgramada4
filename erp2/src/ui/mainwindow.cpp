#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./../lib/include/producto.h"
#include "./../lib/include/tienda.h"
#include "./../lib/include/excepcionProductoNoExiste.h"
#include "./../lib/include/excepcionProductoYaExiste.h"
#include "./../lib/include/excepcionTipoIncorrecto.h"
#include "creartienda.h"
#include "crearproducto.h"
#include "elegirmodificar.h"
#include "definircambio.h"
#include <string>
#include <QMessageBox>
#include <QFileDialog>
#include <sstream>
#include <fstream>

using namespace TP3;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nuevaTienda = new TP3::Tienda("","","","");
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
        msgbox->setText("Error al crear la tienda. Todos los datos deben estar completados");
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
    if (nuevaTienda->conseguirNombre()==""){
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Debes crear una tienda para manejar sus empleados");
        msgbox->open();
        return;
    }

    crearProducto crearProducto(this);
    int result = crearProducto.exec();

    if (crearProducto.conseguirID()==0||crearProducto.conseguirNombre()==""){
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Error al crear el producto. Todos los datos deben estar completados");
        msgbox->open();
        return;
    }

    try{
        if(result==QDialog::Accepted){
            std::string nombre = crearProducto.conseguirNombre();
            int ID = crearProducto.conseguirID();
            int existencias = crearProducto.conseguirExistencias();

            TP3::Producto* nuevoProducto = new TP3::Producto(ID,nombre,existencias);
            nuevaTienda->agregarProducto(nuevoProducto);
            std::ostringstream streamSalida {};
            streamSalida << nuevoProducto;
            std::string temp = streamSalida.str();
            QString nuevoPContenido = QString::fromStdString(temp);
            QListWidgetItem *itemNuevo = new QListWidgetItem(nuevoPContenido);
            itemNuevo->setData(1, ID);
            this->ui->listaProductos->addItem(itemNuevo);

        }
    }catch(ExcepcionProductoYaExiste){
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Ya hay un producto con alguno de estos datos");
        msgbox->open();
        return;
    }
}


void MainWindow::on_boton_Eliminar_clicked()
{
    if (nuevaTienda->conseguirNombre()==""){
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Debes crear una tienda para manejar sus empleados");
        msgbox->open();
        return;
    }

    QListWidgetItem *item = this->ui->listaProductos->currentItem();

    if (item == nullptr)
    {
        QMessageBox *msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("No hay ningun producto seleccionado");
        msgbox->open();
    }
    else
    {
        QString ID = item->data(1).toString();

        int idProducto = ID.toInt();

        nuevaTienda->eliminarProducto(idProducto);

        QListWidgetItem *it = ui->listaProductos->takeItem(ui->listaProductos->currentRow());
        delete it;
    }
}


void MainWindow::on_boton_Modificar_clicked()
{
    if (nuevaTienda->conseguirNombre()==""){
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Debes crear una tienda para manejar sus empleados");
        msgbox->open();
        return;
    }

    QListWidgetItem *item = this->ui->listaProductos->currentItem();

    if (item == nullptr)
    {
        QMessageBox *msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("No hay ningun producto seleccionado");
        msgbox->open();
    }
    else
    {
        QString ID = item->data(1).toString();

        int idProducto = ID.toInt();

        elegirModificar elegirModificar(this);
        elegirModificar.exec();

        definirCambio definirCambio(this);
        definirCambio.exec();

        QString cambio = QString::fromStdString(definirCambio.conseguirCambio());
        bool ok= false;
        cambio.toInt(&ok);
        if (elegirModificar.conseguirEleccion()==2 && !ok){
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->setWindowTitle("Título del diálogo");
            msgbox->setText("Error! Las existencias solo pueden cambiar a digito");
            msgbox->open();

        }else{
            nuevaTienda->modificarProducto(idProducto, elegirModificar.conseguirEleccion(), definirCambio.conseguirCambio());
            TP3::Producto *producto = nuevaTienda->conseguirProducto(idProducto);
            QListWidgetItem *it = ui->listaProductos->takeItem(ui->listaProductos->currentRow());
            delete it;
            std::ostringstream streamSalida {};
            streamSalida << producto;
            std::string temp = streamSalida.str();
            QString nuevoPContenido = QString::fromStdString(temp);
            QListWidgetItem *itemNuevo = new QListWidgetItem(nuevoPContenido);
            this->ui->listaProductos->addItem(itemNuevo);
            itemNuevo->setData(1, ID);
        }
    }
}


void MainWindow::on_boton_Cargar_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        "Abrir archivo de datos", "",
        tr("Archivo de datos (*.dat);;All Files (*)"));

    if (fileName != "")
    {
        std::string name = fileName.toStdString();

        std::ifstream archivoSalida;

        archivoSalida.open(name, std::ios::in|std::ios::binary);

        if (!archivoSalida.is_open()) {
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->setWindowTitle("Título del diálogo");
            msgbox->setText("No se pudo abrir archivo archivo_test.dat para escribir los datos");
            msgbox->open();
            return;
        }
        delete nuevaTienda;
        nuevaTienda = new TP3::Tienda();
        nuevaTienda->cargarDesdeStreamBinario(&archivoSalida);
        archivoSalida.close();
        QString nombreVisible = QString::fromStdString(nuevaTienda->conseguirNombre());
        this->ui->txt_Nombre->setText(nombreVisible);
        QString dirIntVisible = QString::fromStdString(nuevaTienda->conseguirDireccionInternet());
        this->ui->txt_Dinternet->setText(dirIntVisible);
        QString dirFisVisible = QString::fromStdString(nuevaTienda->conseguirDireccion());
        this->ui->txt_Dfisica->setText(dirFisVisible);
        QString telefonoVisible = QString::fromStdString(nuevaTienda->conseguirTelefono());
        this->ui->txt_telefono->setText(telefonoVisible);

        this->ui->listaProductos->clear();

        for (Producto *producto : nuevaTienda->conseguirCatalogo()){
            QString ID = QString::number(producto->conseguirNumero());
            std::ostringstream streamSalida {};
            streamSalida << producto;
            std::string temp = streamSalida.str();
            QString nuevoPContenido = QString::fromStdString(temp);
            QListWidgetItem *itemNuevo = new QListWidgetItem(nuevoPContenido);
            this->ui->listaProductos->addItem(itemNuevo);
            itemNuevo->setData(1, ID);
        }
    }
}


void MainWindow::on_boton_Guardar_clicked() {
    if (nuevaTienda->conseguirNombre()==""){
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Debes crear una tienda para manejar sus empleados");
        msgbox->open();
        return;
    }

    QString fileName = QFileDialog::getSaveFileName(this,
        "Guardar archivo de datos", "",
        tr("Archivo de datos (*.dat);;All Files (*)"));


    if (fileName != "")
    {
        std::string name = fileName.toStdString();

        std::ofstream archivoEntrada;

        archivoEntrada.open(name, std::ios::out|std::ios::binary);

        if (!archivoEntrada.is_open())
        {
            QMessageBox *msgbox = new QMessageBox(this);
            msgbox->setWindowTitle("Título del diálogo");
            msgbox->setText("No se pudo abrir el archivo para escribir los datos");
            msgbox->open();
            return;
        }

        nuevaTienda->guardarEnStreamBinario(&archivoEntrada);
        archivoEntrada.close();

    }
}

