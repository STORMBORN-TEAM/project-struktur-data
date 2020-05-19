#ifndef TAMPILANUTAMA_H
#define TAMPILANUTAMA_H

#include <QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include "secpage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TampilanUtama; }
QT_END_NAMESPACE

class TampilanUtama : public QMainWindow
{
    Q_OBJECT

public:
    TampilanUtama(QWidget *parent = nullptr);
    ~TampilanUtama();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TampilanUtama *ui;
    secpage *Secpage;
};
#endif // TAMPILANUTAMA_H
