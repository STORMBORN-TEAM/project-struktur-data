#include "mainpage.h"
#include "ui_mainpage.h"
#include "secondpage.h"
mainpage::mainpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainpage)
{
    ui->setupUi(this);
    QSqlDatabase mydb=QSqlDatabase ::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/ACER/Desktop/KULIAH/Semester 2/Struktur Data/project/main page/mainpage/mainpage.db");

    if(!mydb.open())
        ui->label->setText("Failed to open the database");
    else
        ui->label->setText("Connected...");
}

mainpage::~mainpage()
{
    delete ui;
}


void mainpage::on_pushButton_clicked()
{
    secondpage secondpage;
    secondpage.setModal(true);
    secondpage.exec();


}
