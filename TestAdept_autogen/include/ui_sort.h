/********************************************************************************
** Form generated from reading UI file 'sort.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_H
#define UI_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Sort
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *Distant_rbtn;
    QComboBox *Distant_box;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *Name_rbtn;
    QLineEdit *Name_line;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *Type_rbtn;
    QLineEdit *Type_line;
    QRadioButton *Time_rbtn;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK_btn;
    QPushButton *Cancel_btn;

    void setupUi(QDialog *Sort)
    {
        if (Sort->objectName().isEmpty())
            Sort->setObjectName(QString::fromUtf8("Sort"));
        Sort->resize(400, 162);
        Sort->setMinimumSize(QSize(400, 162));
        Sort->setMaximumSize(QSize(400, 2000));
        verticalLayout_2 = new QVBoxLayout(Sort);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Distant_rbtn = new QRadioButton(Sort);
        Distant_rbtn->setObjectName(QString::fromUtf8("Distant_rbtn"));

        horizontalLayout->addWidget(Distant_rbtn);

        Distant_box = new QComboBox(Sort);
        Distant_box->addItem(QString());
        Distant_box->addItem(QString());
        Distant_box->addItem(QString());
        Distant_box->addItem(QString());
        Distant_box->addItem(QString());
        Distant_box->setObjectName(QString::fromUtf8("Distant_box"));
        Distant_box->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Distant_box->sizePolicy().hasHeightForWidth());
        Distant_box->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Distant_box);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Name_rbtn = new QRadioButton(Sort);
        Name_rbtn->setObjectName(QString::fromUtf8("Name_rbtn"));

        horizontalLayout_3->addWidget(Name_rbtn);

        Name_line = new QLineEdit(Sort);
        Name_line->setObjectName(QString::fromUtf8("Name_line"));
        Name_line->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Name_line->sizePolicy().hasHeightForWidth());
        Name_line->setSizePolicy(sizePolicy1);
        Name_line->setMinimumSize(QSize(295, 0));
        Name_line->setMaxLength(1);

        horizontalLayout_3->addWidget(Name_line);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Type_rbtn = new QRadioButton(Sort);
        Type_rbtn->setObjectName(QString::fromUtf8("Type_rbtn"));

        horizontalLayout_4->addWidget(Type_rbtn);

        Type_line = new QLineEdit(Sort);
        Type_line->setObjectName(QString::fromUtf8("Type_line"));
        Type_line->setEnabled(false);
        sizePolicy1.setHeightForWidth(Type_line->sizePolicy().hasHeightForWidth());
        Type_line->setSizePolicy(sizePolicy1);
        Type_line->setMinimumSize(QSize(295, 0));
        Type_line->setMaxLength(1);

        horizontalLayout_4->addWidget(Type_line);


        verticalLayout->addLayout(horizontalLayout_4);

        Time_rbtn = new QRadioButton(Sort);
        Time_rbtn->setObjectName(QString::fromUtf8("Time_rbtn"));

        verticalLayout->addWidget(Time_rbtn);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        OK_btn = new QPushButton(Sort);
        OK_btn->setObjectName(QString::fromUtf8("OK_btn"));
        OK_btn->setEnabled(true);

        horizontalLayout_2->addWidget(OK_btn);

        Cancel_btn = new QPushButton(Sort);
        Cancel_btn->setObjectName(QString::fromUtf8("Cancel_btn"));

        horizontalLayout_2->addWidget(Cancel_btn);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Sort);

        QMetaObject::connectSlotsByName(Sort);
    } // setupUi

    void retranslateUi(QDialog *Sort)
    {
        Sort->setWindowTitle(QCoreApplication::translate("Sort", "Dialog", nullptr));
        Distant_rbtn->setText(QCoreApplication::translate("Sort", "\320\224\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        Distant_box->setItemText(0, QCoreApplication::translate("Sort", "\320\235\320\265\321\202", nullptr));
        Distant_box->setItemText(1, QCoreApplication::translate("Sort", "\320\224\320\276 100", nullptr));
        Distant_box->setItemText(2, QCoreApplication::translate("Sort", "\320\224\320\276 1000", nullptr));
        Distant_box->setItemText(3, QCoreApplication::translate("Sort", "\320\224\320\276 10000", nullptr));
        Distant_box->setItemText(4, QCoreApplication::translate("Sort", "\320\224\320\276 10000+", nullptr));

        Name_rbtn->setText(QCoreApplication::translate("Sort", "\320\230\320\274\321\217", nullptr));
        Name_line->setPlaceholderText(QCoreApplication::translate("Sort", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\265\321\200\320\262\321\213\320\271 \321\201\320\270\320\274\320\262\320\276\320\273...", nullptr));
        Type_rbtn->setText(QCoreApplication::translate("Sort", "\320\242\320\270\320\277", nullptr));
        Type_line->setPlaceholderText(QCoreApplication::translate("Sort", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\265\321\200\320\262\321\213\320\271 \321\201\320\270\320\274\320\262\320\276\320\273...", nullptr));
        Time_rbtn->setText(QCoreApplication::translate("Sort", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\276\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        OK_btn->setText(QCoreApplication::translate("Sort", "\320\236\320\232", nullptr));
        Cancel_btn->setText(QCoreApplication::translate("Sort", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sort: public Ui_Sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
