#ifndef CREARTIENDA_H
#define CREARTIENDA_H

#include <QDialog>

namespace Ui {
class crearTienda;
}

class crearTienda : public QDialog
{
    Q_OBJECT

public:
    explicit crearTienda(QWidget *parent = nullptr);
    ~crearTienda();
    std::string conseguirNombre();
    std::string conseguirdirInt();
    std::string conseguirdirFis();
    std::string conseguirTelefono();
private slots:
    void on_edit_nombre_editingFinished();
    void on_edit_dirInt_editingFinished();
    void on_edit_dirFis_editingFinished();
    void on_edit_telefono_editingFinished();

private:
    Ui::crearTienda *ui;
    std::string nombre;
    std::string dirInt;
    std::string dirFis;
    std::string telefono;
};

#endif // CREARTIENDA_H
