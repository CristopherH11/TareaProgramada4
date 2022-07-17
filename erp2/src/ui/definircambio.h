#ifndef DEFINIRCAMBIO_H
#define DEFINIRCAMBIO_H

#include <QDialog>

namespace Ui {
class definirCambio;
}

class definirCambio : public QDialog
{
    Q_OBJECT

public:
    explicit definirCambio(QWidget *parent = nullptr);
    ~definirCambio();
    std::string conseguirCambio();

private:
    Ui::definirCambio *ui;
    std::string cambio;
};

#endif // DEFINIRCAMBIO_H
