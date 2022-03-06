#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>
#include "studentperson.h"
#include <QFile>
#include <QMessageBox>
#include <QString>
#include <QByteArray>


#define filenamea "student.txt"
#define tempfilename "student_temp.txt"

namespace Ui {
class StudentDialog;
}

class StudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDialog(QWidget *parent = 0);
    ~StudentDialog();


private:
    Ui::StudentDialog *ui;
signals:
    void submit_close();
private slots:
    void on_savedialog_clicked();

    void on_submit_clicked();
};

#endif // STUDENTDIALOG_H
