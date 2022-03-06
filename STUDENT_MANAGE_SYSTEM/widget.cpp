#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    stu = new STudentPerson();
    diag = new StudentDialog();
    themodel = new QStandardItemModel;
    theselection = new QItemSelectionModel(themodel,this);
    ui->tableView->setModel(themodel);
    ui->tableView->setSelectionModel(theselection);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tableView->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->editStudent->setPlaceholderText("请输入名字查找");
    ui->editStudent->setClearButtonEnabled(true);
    ui->editStudent->setStyleSheet("QlinedEdit{padding:3,3,3,3;}");






    QObject::connect(ui->insertStudent,SIGNAL(clicked(bool)),this,SLOT(on_insert()));
    connect(diag,&StudentDialog::submit_close,this,&Widget::flushtable);
    connect(ui->tableView,&QTableView::clicked,this,&Widget::flushlistwidget);
    connect(ui->tableView,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(leftclicked(QPoint)));

}

Widget::~Widget()
{
    delete ui;


}

void Widget::leftclicked(QPoint point)
{

    QModelIndex index = ui->tableView->indexAt(point);
    currentrow = index.row();
    currentcol = index.column();


}

void Widget::on_insert()
{
    diag->exec();

}

void Widget::flushtable()
{

    QString flname = QCoreApplication::applicationDirPath()+"/student.txt";

    QFile file(flname);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text)){
        QMessageBox::warning(this,"wrong",QString("open error:%1(becuase:%2)").arg(flname).arg(file.errorString()),QMessageBox::Ok);
    }
    else{QTextStream data(&file);
        //        data.setAutoDetectUnicode(true);
        QStringList strlist;
        QString   strdata;
        while(!data.atEnd()){
            strdata = data.readLine();

            strlist.append(strdata);
        }
        themodel->setRowCount(strlist.count()-1);
        //表头
        QString tempdata;
        QStringList templist;


        tempdata = strlist.at(0);
        templist = tempdata.split(QRegExp("\\s+"),QString::SkipEmptyParts);
        themodel->setHorizontalHeaderLabels(templist);

        //数据

        QStandardItem *item;
        QString tempstr;
        QStringList templ;
        qint16 row = strlist.count();

        for(int i =1;i<row;i++){
            tempstr = strlist.at(i);
            templ = tempstr.split(QRegExp("\\s+"),QString::SkipEmptyParts);

            for(int j=0;j<templ.count();j++){
                item = new QStandardItem(templ.at(j));
                themodel->setItem(i-1,j,item);
            }
        }

    }
}

void Widget::flushlistwidget(const QModelIndex &index)
{
    ui->listStudent->clear();
    QListWidgetItem *litem;
    qint16 row = index.row();
    currentrow = row;
    qint16 col = index.model()->columnCount();
    const QStandardItemModel *hmodel = qobject_cast<const   QStandardItemModel*>(index.model());
    QStandardItem *hitem;

    for(int i=0;i<col;i++){
    hitem = hmodel->horizontalHeaderItem(i);
    litem = new QListWidgetItem(hitem->text()+":"+themodel->item(row,i)->text());

//    QStandardItem *item = themodel->itemFromIndex(index);
//    litem = new QListWidgetItem(item->text());
    ui->listStudent->addItem(litem);

}

}


void Widget::on_exitStudent_clicked()
{
    this->close();
}

void Widget::on_saveStudent_clicked()
{
    QString curpath = QCoreApplication::applicationDirPath();
    QString savafilename = QFileDialog::getSaveFileName(this,"保存文件",curpath,"文本文件(*.txt);;所有文件(*.*)");

    if (savafilename.isEmpty()) return;

    QFile file(savafilename);
    if(!file.open(QIODevice::ReadWrite|QIODevice::Text|QIODevice::Truncate)) return;

    QTextStream stream(&file);
    QString str;
    QStandardItem *item;
    for(int i=0;i<themodel->columnCount();i++){

        item = themodel->horizontalHeaderItem(i);
        str=str+item->text()+"\t";

    }
    stream<<str<<"\n";
    for (int j = 0;j<themodel->rowCount();j++){

        str="";
        for(int m = 0;m<themodel->columnCount();m++){

            item = themodel->item(j,m);
            str=str+item->text()+"\t";

        }
        stream<<str<<"\n";
    }

}

void Widget::on_deletStudent_clicked()
{
//    qint16 row = theselection->Rows;
    themodel->removeRow(currentrow);
}

void Widget::on_editStudent_returnPressed()
{
    qint16 row = themodel->rowCount();
    bool find = false;
    QString name = ui->editStudent->text();
    for(int i=0;i<row;i++){
        QStandardItem *item = themodel->itemFromIndex(themodel->index(i,1));
        QString fname = item->text();
        if(name==fname){
            find = true;
            theselection->setCurrentIndex(themodel->index(i,1),QItemSelectionModel::Select);
            flushlistwidget(theselection->currentIndex());
            break;

        }


    }
    if(find==false){

        QMessageBox::information(this,"信息提示","没找到",QMessageBox::Ok);
    }
}
