/********************************************************************************
** Form generated from reading UI file 'studentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDIALOG_H
#define UI_STUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *submit;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;

    void setupUi(QDialog *StudentDialog)
    {
        if (StudentDialog->objectName().isEmpty())
            StudentDialog->setObjectName(QStringLiteral("StudentDialog"));
        StudentDialog->resize(386, 389);
        gridLayout = new QGridLayout(StudentDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(StudentDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(30, 0));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(StudentDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(StudentDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(30, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(StudentDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(StudentDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(30, 0));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(StudentDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(StudentDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(30, 0));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(StudentDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(StudentDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(30, 0));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(StudentDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(StudentDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(30, 0));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(StudentDialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(StudentDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(30, 0));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_7);

        lineEdit_7 = new QLineEdit(StudentDialog);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_7->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        submit = new QPushButton(StudentDialog);
        submit->setObjectName(QStringLiteral("submit"));

        horizontalLayout_8->addWidget(submit);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        cancel = new QPushButton(StudentDialog);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_8->addWidget(cancel);


        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 1);


        retranslateUi(StudentDialog);
        QObject::connect(cancel, SIGNAL(clicked()), StudentDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentDialog)
    {
        StudentDialog->setWindowTitle(QApplication::translate("StudentDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("StudentDialog", "\345\255\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("StudentDialog", "\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("StudentDialog", "\345\271\264\351\276\204", Q_NULLPTR));
        label_4->setText(QApplication::translate("StudentDialog", "\346\200\247\345\210\253", Q_NULLPTR));
        label_5->setText(QApplication::translate("StudentDialog", "\350\257\255\346\226\207", Q_NULLPTR));
        label_6->setText(QApplication::translate("StudentDialog", "\346\225\260\345\255\246", Q_NULLPTR));
        label_7->setText(QApplication::translate("StudentDialog", "\350\213\261\350\257\255", Q_NULLPTR));
        submit->setText(QApplication::translate("StudentDialog", "\346\217\220\344\272\244", Q_NULLPTR));
        cancel->setText(QApplication::translate("StudentDialog", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudentDialog: public Ui_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDIALOG_H
