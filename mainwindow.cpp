#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
//#include "secdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("hello C++");
}

void MainWindow::on_pushButton_2_clicked()
{
QMessageBox::critical(this, tr("THE TITLE"), tr("this is a shiv"));
}

void MainWindow::on_pushButton_3_clicked()
{
    //second window model approach
  SecDialog secdilog;
  secdilog.setModal(true);
  secdilog.exec();

}

void MainWindow::on_pushButton_4_clicked()
{
    //second window modalless approach
   secdlg = new SecDialog(this);
    secdlg->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    //html with qt
    ui->label->setText("<html><b><u>T</u>ow</b><br>lines</html>");
}

void MainWindow::on_pushButton_6_clicked()
{
    //html table
     ui->label->setText("<html><body><table border='1'> <tr> <td>Alfreds Futterkiste</td> <td>Maria Anders</td> </tr> <tr> <td>Centro comercial Moctezuma</td><td>Francisco Chang</td><td>Mexico</td></tr></table></body></html>");
}
