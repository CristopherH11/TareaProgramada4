/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *txt_Nombre;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *txt_Dinternet;
    QLabel *txt_Dfisica;
    QLabel *txt_telefono;
    QLabel *label_9;
    QPushButton *boton_Cargar;
    QPushButton *boton_Guardar;
    QListView *listaProdcutos;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QPushButton *boton_Agregar;
    QPushButton *boton_Modificar;
    QPushButton *boton_Eliminar;
    QPushButton *boton_CrearTienda;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(848, 476);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 351, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        txt_Nombre = new QLabel(formLayoutWidget);
        txt_Nombre->setObjectName(QString::fromUtf8("txt_Nombre"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txt_Nombre);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txt_Dinternet = new QLabel(formLayoutWidget);
        txt_Dinternet->setObjectName(QString::fromUtf8("txt_Dinternet"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txt_Dinternet);

        txt_Dfisica = new QLabel(formLayoutWidget);
        txt_Dfisica->setObjectName(QString::fromUtf8("txt_Dfisica"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txt_Dfisica);

        txt_telefono = new QLabel(formLayoutWidget);
        txt_telefono->setObjectName(QString::fromUtf8("txt_telefono"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txt_telefono);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        boton_Cargar = new QPushButton(centralwidget);
        boton_Cargar->setObjectName(QString::fromUtf8("boton_Cargar"));
        boton_Cargar->setGeometry(QRect(10, 300, 201, 25));
        boton_Guardar = new QPushButton(centralwidget);
        boton_Guardar->setObjectName(QString::fromUtf8("boton_Guardar"));
        boton_Guardar->setGeometry(QRect(10, 340, 201, 25));
        listaProdcutos = new QListView(centralwidget);
        listaProdcutos->setObjectName(QString::fromUtf8("listaProdcutos"));
        listaProdcutos->setGeometry(QRect(370, 10, 401, 301));
        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(370, 320, 201, 95));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        boton_Agregar = new QPushButton(formLayoutWidget_2);
        boton_Agregar->setObjectName(QString::fromUtf8("boton_Agregar"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, boton_Agregar);

        boton_Modificar = new QPushButton(formLayoutWidget_2);
        boton_Modificar->setObjectName(QString::fromUtf8("boton_Modificar"));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, boton_Modificar);

        boton_Eliminar = new QPushButton(formLayoutWidget_2);
        boton_Eliminar->setObjectName(QString::fromUtf8("boton_Eliminar"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, boton_Eliminar);

        boton_CrearTienda = new QPushButton(centralwidget);
        boton_CrearTienda->setObjectName(QString::fromUtf8("boton_CrearTienda"));
        boton_CrearTienda->setGeometry(QRect(10, 260, 201, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 848, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        txt_Nombre->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Direcci\303\263n de Internet", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Direcci\303\263n f\303\254sica", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Tel\303\250fono", nullptr));
        txt_Dinternet->setText(QString());
        txt_Dfisica->setText(QString());
        txt_telefono->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "INFORMACION DE LA TIENDA", nullptr));
        boton_Cargar->setText(QCoreApplication::translate("MainWindow", "Cargar desde archivo bInario", nullptr));
        boton_Guardar->setText(QCoreApplication::translate("MainWindow", "Guardar en archivo bInario", nullptr));
        boton_Agregar->setText(QCoreApplication::translate("MainWindow", "Agregar producto", nullptr));
        boton_Modificar->setText(QCoreApplication::translate("MainWindow", "Modificar Producto", nullptr));
        boton_Eliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar producto", nullptr));
        boton_CrearTienda->setText(QCoreApplication::translate("MainWindow", "Crear tienda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
