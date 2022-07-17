#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./../lib/include/tienda.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_boton_CrearTienda_clicked();

    void on_boton_Agregar_clicked();

    void on_boton_Eliminar_clicked();

    void on_boton_Modificar_clicked();

    void on_boton_Cargar_clicked();

    void on_boton_Guardar_clicked();

private:
    Ui::MainWindow *ui;
    TP3::Tienda *nuevaTienda;
};
#endif // MAINWINDOW_H
