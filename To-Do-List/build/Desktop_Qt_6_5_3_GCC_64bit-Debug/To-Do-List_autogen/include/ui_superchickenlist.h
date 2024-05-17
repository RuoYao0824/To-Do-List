/********************************************************************************
** Form generated from reading UI file 'superchickenlist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERCHICKENLIST_H
#define UI_SUPERCHICKENLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SuperChickenList
{
public:
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SuperChickenList)
    {
        if (SuperChickenList->objectName().isEmpty())
            SuperChickenList->setObjectName("SuperChickenList");
        SuperChickenList->resize(970, 674);
        centralwidget = new QWidget(SuperChickenList);
        centralwidget->setObjectName("centralwidget");
        SuperChickenList->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SuperChickenList);
        statusbar->setObjectName("statusbar");
        SuperChickenList->setStatusBar(statusbar);

        retranslateUi(SuperChickenList);

        QMetaObject::connectSlotsByName(SuperChickenList);
    } // setupUi

    void retranslateUi(QMainWindow *SuperChickenList)
    {
        SuperChickenList->setWindowTitle(QCoreApplication::translate("SuperChickenList", "SuperChickenList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuperChickenList: public Ui_SuperChickenList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERCHICKENLIST_H
