/********************************************************************************
** Form generated from reading UI file 'VueSerre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUESERRE_H
#define UI_VUESERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VueSerre
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *positionOuvrants;
    QLineEdit *hygrometrie;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *luminosite;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *temperature;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *VueSerre)
    {
        if (VueSerre->objectName().isEmpty())
            VueSerre->setObjectName(QStringLiteral("VueSerre"));
        VueSerre->resize(306, 168);
        groupBox = new QGroupBox(VueSerre);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 271, 141));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 232, 104));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        positionOuvrants = new QLineEdit(layoutWidget);
        positionOuvrants->setObjectName(QStringLiteral("positionOuvrants"));

        gridLayout->addWidget(positionOuvrants, 3, 1, 1, 1);

        hygrometrie = new QLineEdit(layoutWidget);
        hygrometrie->setObjectName(QStringLiteral("hygrometrie"));

        gridLayout->addWidget(hygrometrie, 1, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        luminosite = new QLineEdit(layoutWidget);
        luminosite->setObjectName(QStringLiteral("luminosite"));

        gridLayout->addWidget(luminosite, 2, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        temperature = new QLineEdit(layoutWidget);
        temperature->setObjectName(QStringLiteral("temperature"));

        gridLayout->addWidget(temperature, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 2, 1, 1);


        retranslateUi(VueSerre);

        QMetaObject::connectSlotsByName(VueSerre);
    } // setupUi

    void retranslateUi(QWidget *VueSerre)
    {
        VueSerre->setWindowTitle(QApplication::translate("VueSerre", "VueSerre", 0));
        groupBox->setTitle(QApplication::translate("VueSerre", "Serre", 0));
        label->setText(QApplication::translate("VueSerre", "Temp\303\251rature :", 0));
        label_4->setText(QApplication::translate("VueSerre", "Position Ouvrants", 0));
        label_2->setText(QApplication::translate("VueSerre", "Hygrom\303\251trie", 0));
        label_3->setText(QApplication::translate("VueSerre", "Luminosit\303\251", 0));
        label_5->setText(QApplication::translate("VueSerre", "\302\260C", 0));
        label_6->setText(QApplication::translate("VueSerre", "%", 0));
        label_7->setText(QApplication::translate("VueSerre", "lux", 0));
        label_8->setText(QApplication::translate("VueSerre", "%", 0));
    } // retranslateUi

};

namespace Ui {
    class VueSerre: public Ui_VueSerre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUESERRE_H
