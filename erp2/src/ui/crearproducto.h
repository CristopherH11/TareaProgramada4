#ifndef CREARPRODUCTO_H
#define CREARPRODUCTO_H

#include <QDialog>

namespace Ui {
class crearProducto;
}

class crearProducto : public QDialog
{
    Q_OBJECT

public:
    explicit crearProducto(QWidget *parent = nullptr);
    ~crearProducto();
    std::string conseguirNombre();
    int conseguirID();
    int conseguirExistencias();

private slots:
    void on_edit_ID_editingFinished();

    void on_edit_Existencias_editingFinished();

private:
    Ui::crearProducto *ui;
};

#endif // CREARPRODUCTO_H
