/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QListWidget *listStudent;
    QGridLayout *gridLayout;
    QPushButton *insertStudent;
    QPushButton *deletStudent;
    QLineEdit *editStudent;
    QPushButton *saveStudent;
    QPushButton *exitStudent;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(905, 380);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter = new QSplitter(Widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(750, 0));
        tableView->setBaseSize(QSize(0, 0));

        verticalLayout_2->addWidget(tableView);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listStudent = new QListWidget(groupBox_2);
        listStudent->setObjectName(QStringLiteral("listStudent"));

        verticalLayout->addWidget(listStudent);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        insertStudent = new QPushButton(groupBox_2);
        insertStudent->setObjectName(QStringLiteral("insertStudent"));

        gridLayout->addWidget(insertStudent, 0, 0, 1, 1);

        deletStudent = new QPushButton(groupBox_2);
        deletStudent->setObjectName(QStringLiteral("deletStudent"));

        gridLayout->addWidget(deletStudent, 0, 1, 1, 1);

        editStudent = new QLineEdit(groupBox_2);
        editStudent->setObjectName(QStringLiteral("editStudent"));

        gridLayout->addWidget(editStudent, 1, 0, 1, 2);

        saveStudent = new QPushButton(groupBox_2);
        saveStudent->setObjectName(QStringLiteral("saveStudent"));

        gridLayout->addWidget(saveStudent, 2, 0, 1, 1);

        exitStudent = new QPushButton(groupBox_2);
        exitStudent->setObjectName(QStringLiteral("exitStudent"));

        gridLayout->addWidget(exitStudent, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_3->addLayout(verticalLayout);

        splitter->addWidget(groupBox_2);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\345\255\246\347\224\237\350\241\250", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\255\246\347\224\237\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
        insertStudent->setText(QApplication::translate("Widget", "\346\217\222\345\205\245\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        deletStudent->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        saveStudent->setText(QApplication::translate("Widget", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
        exitStudent->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
