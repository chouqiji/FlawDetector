/********************************************************************************
** Form generated from reading UI file 'fdmain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FDMAIN_H
#define UI_FDMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fdmain
{
public:

    void setupUi(QWidget *fdmain)
    {
        if (fdmain->objectName().isEmpty())
            fdmain->setObjectName(QStringLiteral("fdmain"));
        fdmain->resize(400, 300);

        retranslateUi(fdmain);

        QMetaObject::connectSlotsByName(fdmain);
    } // setupUi

    void retranslateUi(QWidget *fdmain)
    {
        fdmain->setWindowTitle(QApplication::translate("fdmain", "fdmain", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fdmain: public Ui_fdmain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FDMAIN_H
