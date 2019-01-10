/********************************************************************************
** Form generated from reading UI file 'VuePrincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUEPRINCIPALE_H
#define UI_VUEPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VuePrincipale
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *meteo;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *serre;
    QLabel *label;

    void setupUi(QWidget *VuePrincipale)
    {
        if (VuePrincipale->objectName().isEmpty())
            VuePrincipale->setObjectName(QStringLiteral("VuePrincipale"));
        VuePrincipale->resize(946, 392);
        horizontalLayoutWidget = new QWidget(VuePrincipale);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 50, 301, 111));
        meteo = new QHBoxLayout(horizontalLayoutWidget);
        meteo->setObjectName(QStringLiteral("meteo"));
        meteo->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(VuePrincipale);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 180, 921, 201));
        serre = new QHBoxLayout(horizontalLayoutWidget_2);
        serre->setObjectName(QStringLiteral("serre"));
        serre->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(VuePrincipale);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 20, 135, 15));

        retranslateUi(VuePrincipale);

        QMetaObject::connectSlotsByName(VuePrincipale);
    } // setupUi

    void retranslateUi(QWidget *VuePrincipale)
    {
        VuePrincipale->setWindowTitle(QApplication::translate("VuePrincipale", "VuePrincipale", 0));
        label->setText(QApplication::translate("VuePrincipale", "Surveillance de Serres", 0));
    } // retranslateUi

};

namespace Ui {
    class VuePrincipale: public Ui_VuePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUEPRINCIPALE_H
