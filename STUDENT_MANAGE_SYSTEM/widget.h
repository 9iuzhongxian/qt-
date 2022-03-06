#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "studentperson.h"
#include "studentdialog.h"
#include <QObject>
#include <QTextStream>
#include <QTextCodec>
#include <QTableWidgetItem>
#include <QTableView>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QModelIndex>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();




private:
    Ui::Widget *ui;
    STudentPerson *stu;
    StudentDialog *diag;
    QStandardItemModel *themodel;
    QItemSelectionModel *theselection;
    qint16 currentrow;
    qint16 currentcol;


public slots:
    void flushtable();
    void flushlistwidget(const QModelIndex &index);




private slots:
    void on_insert();
    void leftclicked(QPoint point);





    void on_exitStudent_clicked();
    void on_saveStudent_clicked();
    void on_deletStudent_clicked();
    void on_editStudent_returnPressed();
};

#endif // WIDGET_H
