#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFileDialog>
#include <QMainWindow>
#include <QFile>
#include <QIcon>
#include <QtUiTools/QUiLoader>
#include <QWidget>
#include "mainwindoutest.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    MainWindouTest *test;
private slots:
    void on_but_start_clicked();
    void checkFields();
};

#endif // MAINWINDOW_H
