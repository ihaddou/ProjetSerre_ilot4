/********************************************************************************
** Form generated from reading UI file 'VueMeteo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUEMETEO_H
#define UI_VUEMETEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VueMeteo
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *vVent;
    QLabel *temp;
    QVBoxLayout *verticalLayout;
    QLineEdit *vitesseVent;
    QLineEdit *temperature;
    QVBoxLayout *verticalLayout_3;
    QLabel *vVent_2;
    QLabel *vVent_3;

    void setupUi(QWidget *VueMeteo)
    {
        if (VueMeteo->objectName().isEmpty())
            VueMeteo->setObjectName(QStringLiteral("VueMeteo"));
        VueMeteo->resize(225, 103);
        groupBox = new QGroupBox(VueMeteo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 201, 81));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 177, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        vVent = new QLabel(layoutWidget);
        vVent->setObjectName(QStringLiteral("vVent"));

        verticalLayout_2->addWidget(vVent);

        temp = new QLabel(layoutWidget);
        temp->setObjectName(QStringLiteral("temp"));

        verticalLayout_2->addWidget(temp);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        vitesseVent = new QLineEdit(layoutWidget);
        vitesseVent->setObjectName(QStringLiteral("vitesseVent"));
        vitesseVent->setReadOnly(true);

        verticalLayout->addWidget(vitesseVent);

        temperature = new QLineEdit(layoutWidget);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setReadOnly(true);
        temperature->setClearButtonEnabled(false);

        verticalLayout->addWidget(temperature);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        vVent_2 = new QLabel(layoutWidget);
        vVent_2->setObjectName(QStringLiteral("vVent_2"));

        verticalLayout_3->addWidget(vVent_2);

        vVent_3 = new QLabel(layoutWidget);
        vVent_3->setObjectName(QStringLiteral("vVent_3"));

        verticalLayout_3->addWidget(vVent_3);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(VueMeteo);

        QMetaObject::connectSlotsByName(VueMeteo);
    } // setupUi

    void retranslateUi(QWidget *VueMeteo)
    {
        VueMeteo->setWindowTitle(QApplication::translate("VueMeteo", "VueMeteo", 0));
        groupBox->setTitle(QApplication::translate("VueMeteo", "M\303\251t\303\251o", 0));
        vVent->setText(QApplication::translate("VueMeteo", "Vitesse du vent :", 0));
        temp->setText(QApplication::translate("VueMeteo", "Temp\303\251rature :", 0));
        vVent_2->setText(QApplication::translate("VueMeteo", "km/h", 0));
        vVent_3->setText(QApplication::translate("VueMeteo", "\302\260C", 0));
    } // retranslateUi

};

namespace Ui {
    class VueMeteo: public Ui_VueMeteo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUEMETEO_H
