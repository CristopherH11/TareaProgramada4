#ifndef ELEGIRMODIFICAR_H
#define ELEGIRMODIFICAR_H

#include <QDialog>

namespace Ui {
class elegirModificar;
}

class elegirModificar : public QDialog
{
    Q_OBJECT

public:
    explicit elegirModificar(QWidget *parent = nullptr);
    ~elegirModificar();
    int conseguirEleccion();

private slots:
    void on_botonElegirNombre_clicked();

    void on_botonElegirExistencias_clicked();

private:
    Ui::elegirModificar *ui;
    int eleccion;
};

#endif // ELEGIRMODIFICAR_H
