/********************************************************************************
** Form generated from reading UI file 'creartienda.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREARTIENDA_H
#define UI_CREARTIENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crearTienda
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *edit_nombre;
    QLineEdit *edit_dirInt;
    QLineEdit *edit_dirFis;
    QLineEdit *edit_telefono;

    void setupUi(QDialog *crearTienda)
    {
        if (crearTienda->objectName().isEmpty())
            crearTienda->setObjectName(QString::fromUtf8("crearTienda"));
        crearTienda->resize(320, 240);
        buttonBox = new QDialogButtonBox(crearTienda);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 200, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(crearTienda);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 10, 311, 150));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        edit_nombre = new QLineEdit(formLayoutWidget);
        edit_nombre->setObjectName(QString::fromUtf8("edit_nombre"));
        edit_nombre->setMaxLength(15);

        formLayout->setWidget(2, QFormLayout::FieldRole, edit_nombre);

        edit_dirInt = new QLineEdit(formLayoutWidget);
        edit_dirInt->setObjectName(QString::fromUtf8("edit_dirInt"));
        edit_dirInt->setEnabled(true);
        edit_dirInt->setMaxLength(24);

        formLayout->setWidget(3, QFormLayout::FieldRole, edit_dirInt);

        edit_dirFis = new QLineEdit(formLayoutWidget);
        edit_dirFis->setObjectName(QString::fromUtf8("edit_dirFis"));
        edit_dirFis->setMaxLength(24);

        formLayout->setWidget(4, QFormLayout::FieldRole, edit_dirFis);

        edit_telefono = new QLineEdit(formLayoutWidget);
        edit_telefono->setObjectName(QString::fromUtf8("edit_telefono"));
        edit_telefono->setMaxLength(8);

        formLayout->setWidget(5, QFormLayout::FieldRole, edit_telefono);


        retranslateUi(crearTienda);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, crearTienda, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, crearTienda, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(crearTienda);
    } // setupUi

    void retranslateUi(QDialog *crearTienda)
    {
        crearTienda->setWindowTitle(QCoreApplication::translate("crearTienda", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("crearTienda", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("crearTienda", "Direcci\303\263n de Internet", nullptr));
        label_3->setText(QCoreApplication::translate("crearTienda", "Direcci\303\263n f\303\255sica", nullptr));
        label_4->setText(QCoreApplication::translate("crearTienda", "Tel\303\251fono", nullptr));
    } // retranslateUi

};

namespace Ui {
    class crearTienda: public Ui_crearTienda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREARTIENDA_H
