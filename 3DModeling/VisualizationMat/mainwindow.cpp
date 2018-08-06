#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <string.h>
#include <iostream>
#include <QFile>
#include <QDebug>

struct data_ele {
    char ele[10];
    int cubic_num;
    int ele_num;
    float w;
    float d;
    int r;
    int mp;
    int bp;
};

void cubic_num(int c)
{
    if(c==1) printf("SC ");
    else if(c==2) printf("BCC");
    else if(c==3) printf("FCC");
    else printf("HCP");
}

std::vector<data_ele> datas;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    data_ele t;
    int n=0;
    QString dir = qApp->applicationDirPath();
    QString filename="/Users/jschang/Desktop/build-VisualizationMat-Desktop_Qt_5_11_1_clang_64bit-Debug/data.txt";
    QFile file(filename);
    if(!file.exists()) {
        qDebug() << "No File Exits" << filename;
        return;
    }
    QString fn = "/Users/jschang/Desktop/build-VisualizationMat-Desktop_Qt_5_11_1_clang_64bit-Debug/input.txt";
    QFile file2(fn);
    file2.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file2);

    QString line;
    QString tmp;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream stream(&file);
            while (!stream.atEnd()){
                line = stream.readLine();
                std::string s = line.toUtf8().constData();
                strcpy(t.ele, s.c_str());

                line = stream.readLine();
                t.cubic_num = line.toInt();


                line = stream.readLine();
                t.ele_num = line.toInt();

                line = stream.readLine();
                t.w = line.toFloat();

                line = stream.readLine();
                t.d = line.toFloat();

                line = stream.readLine();
                t.r = line.toInt();

                line = stream.readLine();
                t.mp = line.toInt();

                line = stream.readLine();
                t.bp = line.toInt();

                n++;
                datas.push_back(t);
            }
        }
        file.close();
    QString qs;
    qs = ui->lineEdit->text();
    std::string s = qs.toUtf8().constData();
    char st[10];
    strcpy(st, s.c_str());
    QString qqs;
    bool sw=false;
    ui->z_label->setText("");
    ui->cu_label->setText("");
    ui->amu_label->setText("");
    ui->d_label->setText("");
    ui->mp_label->setText("");
    ui->bp_label->setText("");
    ui->r_label->setText("");
    for(int i=0; i<n; i++) {
        if(!strcmp(st, datas[i].ele)) {
            //cubic_num(datas[i].cubic_num);
            if(datas[i].cubic_num==1) qqs="SC";
            if(datas[i].cubic_num==2) qqs="BCC";
            if(datas[i].cubic_num==3) qqs="FCC";
            if(datas[i].cubic_num==4) qqs="HCP";
            ui->cu_label->setText(qqs);
            QString tmp;
            tmp = QString::number(datas[i].ele_num);
            ui->z_label->setText(tmp);
            tmp = QString::number(datas[i].w);
            ui->amu_label->setText(tmp);
            tmp = QString::number(datas[i].d);
            ui->d_label->setText(tmp);
            tmp = QString::number(datas[i].mp);
            ui->mp_label->setText(tmp);
            tmp = QString::number(datas[i].bp);
            ui->bp_label->setText(tmp);
            tmp = QString::number(datas[i].r);
            ui->r_label->setText(tmp);

            out << datas[i].cubic_num << "\n";

            sw=true;
        }
    }

    if(sw==false) {
        QMessageBox::information(this,"Visualization of Latice Material", "No Element Found");
    }

}



void MainWindow::on_draw_button_clicked()
{
    QString dir = qApp->applicationDirPath();

//    QString path_filename=dir+"/path.txt";
//    QFile path_file(path_filename);
//    if(!path_file.exists()) {
//        qDebug() << "No File Exits" << path_filename;
//        return;
//    } else {
//        qDebug() << "File exists!";
//    }
//    QString line;

//    if (path_file.open(QIODevice::ReadOnly | QIODevice::Text)){
//            QTextStream stream(&path_file);
//            while (!stream.atEnd()){
//                line = stream.readLine();
//            }
//    }
//    qDebug() << "Path of Executable File " << line;
//    qDebug() << "Running Visualizer";
    system ("/Users/jschang/Desktop/build-VisualizationMat-Desktop_Qt_5_11_1_clang_64bit-Debug/LatticeMaterial");
}
