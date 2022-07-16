#ifndef CREARPRODCUTO_H
#define CREARPRODCUTO_H

#include <QDialog>

namespace Ui {
class crearProdcuto;
}

class crearProdcuto : public QDialog
{
    Q_OBJECT

public:
    explicit crearProdcuto(QWidget *parent = nullptr);
    ~crearProdcuto();

private:
    Ui::crearProdcuto *ui;
};

#endif // CREARPRODCUTO_H
