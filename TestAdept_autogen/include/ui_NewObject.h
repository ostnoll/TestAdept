/********************************************************************************
** Form generated from reading UI file 'newobject.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWOBJECT_H
#define UI_NEWOBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewObject
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *Name_lbl;
    QLineEdit *Name_line;
    QLabel *X_lbl;
    QLineEdit *X_line;
    QLabel *Y_lbl;
    QLineEdit *Y_line;
    QLabel *Type_lbl;
    QComboBox *Type_box;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK_btn;
    QPushButton *Cancel_btn;

    void setupUi(QDialog *NewObject)
    {
        if (NewObject->objectName().isEmpty())
            NewObject->setObjectName(QString::fromUtf8("NewObject"));
        NewObject->setEnabled(true);
        NewObject->resize(400, 166);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewObject->sizePolicy().hasHeightForWidth());
        NewObject->setSizePolicy(sizePolicy);
        NewObject->setMinimumSize(QSize(400, 166));
        NewObject->setMaximumSize(QSize(400, 166));
        verticalLayout = new QVBoxLayout(NewObject);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        Name_lbl = new QLabel(NewObject);
        Name_lbl->setObjectName(QString::fromUtf8("Name_lbl"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Name_lbl);

        Name_line = new QLineEdit(NewObject);
        Name_line->setObjectName(QString::fromUtf8("Name_line"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Name_line);

        X_lbl = new QLabel(NewObject);
        X_lbl->setObjectName(QString::fromUtf8("X_lbl"));

        formLayout->setWidget(1, QFormLayout::LabelRole, X_lbl);

        X_line = new QLineEdit(NewObject);
        X_line->setObjectName(QString::fromUtf8("X_line"));

        formLayout->setWidget(1, QFormLayout::FieldRole, X_line);

        Y_lbl = new QLabel(NewObject);
        Y_lbl->setObjectName(QString::fromUtf8("Y_lbl"));

        formLayout->setWidget(2, QFormLayout::LabelRole, Y_lbl);

        Y_line = new QLineEdit(NewObject);
        Y_line->setObjectName(QString::fromUtf8("Y_line"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Y_line);

        Type_lbl = new QLabel(NewObject);
        Type_lbl->setObjectName(QString::fromUtf8("Type_lbl"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Type_lbl);

        Type_box = new QComboBox(NewObject);
        Type_box->addItem(QString());
        Type_box->addItem(QString());
        Type_box->addItem(QString());
        Type_box->addItem(QString());
        Type_box->addItem(QString());
        Type_box->setObjectName(QString::fromUtf8("Type_box"));

        formLayout->setWidget(3, QFormLayout::FieldRole, Type_box);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OK_btn = new QPushButton(NewObject);
        OK_btn->setObjectName(QString::fromUtf8("OK_btn"));

        horizontalLayout->addWidget(OK_btn);

        Cancel_btn = new QPushButton(NewObject);
        Cancel_btn->setObjectName(QString::fromUtf8("Cancel_btn"));

        horizontalLayout->addWidget(Cancel_btn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(NewObject);

        QMetaObject::connectSlotsByName(NewObject);
    } // setupUi

    void retranslateUi(QDialog *NewObject)
    {
        NewObject->setWindowTitle(QCoreApplication::translate("NewObject", "Dialog", nullptr));
        Name_lbl->setText(QCoreApplication::translate("NewObject", "\320\230\320\274\321\217", nullptr));
        X_lbl->setText(QCoreApplication::translate("NewObject", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 X", nullptr));
        Y_lbl->setText(QCoreApplication::translate("NewObject", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 Y", nullptr));
        Type_lbl->setText(QCoreApplication::translate("NewObject", "\320\242\320\270\320\277", nullptr));
        Type_box->setItemText(0, QCoreApplication::translate("NewObject", "\320\235\320\265\321\202", nullptr));
        Type_box->setItemText(1, QCoreApplication::translate("NewObject", "\320\247\320\265\320\273\320\276\320\262\320\265\320\272", nullptr));
        Type_box->setItemText(2, QCoreApplication::translate("NewObject", "\320\227\320\264\320\260\320\275\320\270\320\265", nullptr));
        Type_box->setItemText(3, QCoreApplication::translate("NewObject", "\320\234\320\260\321\210\320\270\320\275\320\260", nullptr));
        Type_box->setItemText(4, QCoreApplication::translate("NewObject", "\320\224\320\265\321\200\320\265\320\262\320\276", nullptr));

        OK_btn->setText(QCoreApplication::translate("NewObject", "\320\236\320\232", nullptr));
        Cancel_btn->setText(QCoreApplication::translate("NewObject", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewObject: public Ui_NewObject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWOBJECT_H
