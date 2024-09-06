/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QTableWidget *MainTable;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *NewObj_btn;
    QPushButton *FullLint_btn;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Delete_btn;
    QPushButton *Sort_btn;
    QVBoxLayout *verticalLayout;
    QPushButton *SaveFile_btn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        MainTable = new QTableWidget(Widget);
        MainTable->setObjectName(QString::fromUtf8("MainTable"));
        MainTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);

        verticalLayout_4->addWidget(MainTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        NewObj_btn = new QPushButton(Widget);
        NewObj_btn->setObjectName(QString::fromUtf8("NewObj_btn"));

        verticalLayout_3->addWidget(NewObj_btn);

        FullLint_btn = new QPushButton(Widget);
        FullLint_btn->setObjectName(QString::fromUtf8("FullLint_btn"));

        verticalLayout_3->addWidget(FullLint_btn);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Delete_btn = new QPushButton(Widget);
        Delete_btn->setObjectName(QString::fromUtf8("Delete_btn"));

        verticalLayout_2->addWidget(Delete_btn);

        Sort_btn = new QPushButton(Widget);
        Sort_btn->setObjectName(QString::fromUtf8("Sort_btn"));

        verticalLayout_2->addWidget(Sort_btn);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SaveFile_btn = new QPushButton(Widget);
        SaveFile_btn->setObjectName(QString::fromUtf8("SaveFile_btn"));
        SaveFile_btn->setMinimumSize(QSize(0, 48));

        verticalLayout->addWidget(SaveFile_btn);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        NewObj_btn->setText(QCoreApplication::translate("Widget", "\320\235\320\276\320\262\321\213\320\271 \320\276\320\261\321\212\320\265\320\272\321\202", nullptr));
        FullLint_btn->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\273\320\275\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        Delete_btn->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        Sort_btn->setText(QCoreApplication::translate("Widget", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        SaveFile_btn->setText(QCoreApplication::translate("Widget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
