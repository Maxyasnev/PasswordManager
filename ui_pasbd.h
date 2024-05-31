/********************************************************************************
** Form generated from reading UI file 'pasbd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASBD_H
#define UI_PASBD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pasbd
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *pasbd)
    {
        if (pasbd->objectName().isEmpty())
            pasbd->setObjectName(QString::fromUtf8("pasbd"));
        pasbd->resize(495, 608);
        widget = new QWidget(pasbd);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 491, 601));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);


        retranslateUi(pasbd);

        QMetaObject::connectSlotsByName(pasbd);
    } // setupUi

    void retranslateUi(QDialog *pasbd)
    {
        pasbd->setWindowTitle(QCoreApplication::translate("pasbd", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("pasbd", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pasbd", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pasbd: public Ui_pasbd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASBD_H
