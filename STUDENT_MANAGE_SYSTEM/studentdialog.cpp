#include "studentdialog.h"
#include "ui_studentdialog.h"

StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);
    connect(ui->submit,SIGNAL(clicked(bool)),this,SLOT(on_savedialog_clicked()));

}

StudentDialog::~StudentDialog()
{
    delete ui;
}

void StudentDialog::on_savedialog_clicked()
{
    if(ui->lineEdit->text()!=""&&ui->lineEdit_2->text()!=""
            &&ui->lineEdit_3->text()!=""&&ui->lineEdit_4->text()!=""
            &&ui->lineEdit_5->text()!=""&&ui->lineEdit_6->text()!=""
            &&ui->lineEdit_7->text()!=""){
        STudentPerson *stu;
        stu = new STudentPerson;
        stu->setID(ui->lineEdit->text());
        stu->setName(ui->lineEdit_2->text());
        stu->setAge(ui->lineEdit_3->text());
        stu->setSex(ui->lineEdit_4->text());
        stu->setChinese_score(ui->lineEdit_5->text());
        stu->setMath_score(ui->lineEdit_6->text());
        stu->setEnglish_score(ui->lineEdit_7->text());

        QString flname = QCoreApplication::applicationDirPath()+"/student.txt";
        QFile file(flname);
        file.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text);
//        QDataStream data(&file);

        QByteArray strarry;
        QString str="",str1;
        str1=stu->getID();
        str=str+str1+'\t';
        str1=stu->getName();
        str=str+str1+'\t';
        str1=stu->getAge();
        str=str+str1+'\t';
        str1=stu->getSex();
        str=str+str1+'\t';
        str1=stu->getChinese_score();
        str=str+str1+'\t';
        str1=stu->getMath_score();
        str=str+str1+'\t';
        str1=stu->getEnglish_score();
        str=str+str1+'\n';

       strarry = str.toUtf8();
       file.write(strarry,strarry.length());

               /*<<stu->getName()<<stu->getAge()<<stu->getSex()<<stu->getChinese_score()
           <<stu->getMath_score()<<stu->getEnglish_score()*/;
        file.close();
        this->close();
        emit submit_close();
    }
    else{
        QMessageBox::warning(this,"warning","edit wrong",QMessageBox::Ok);
    }
}

void StudentDialog::on_submit_clicked()
{
    emit submit_close();
}
