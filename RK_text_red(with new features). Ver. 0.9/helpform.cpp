#include "helpform.h"
#include "ui_helpform.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QDataStream>
#include <QTextStream>

HelpForm::HelpForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpForm)
{
    ui->setupUi(this);
    Init();
}

HelpForm::~HelpForm(){
    delete ui;
}

void HelpForm::Init(){
    this->setWindowFlags(Qt::Dialog);

    QFile file(":/txt/txt/help.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Ошибка!", "файл не открывается");

    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textBrowser->setPlainText(text);

    file.close();

}

void HelpForm::changeEventHelp(QEvent *event)
{
    setWindowTitle(tr("Справка"));
    if(event->type() == QEvent::LanguageChange){
        ui->pushButton->setText(tr("Закрыть справку"));
        }
}


void HelpForm::on_pushButton_clicked(){
    close();
}
