#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QStackedWidget>
#include "mainpage.h"
#include "userpage.h"
#include "custompage.h"
#include "recompage.h"
#include "testpage.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void open_page(int page_num);
private slots:

    void on_user_button_clicked();

    void on_flashy_button_clicked();

private:
    Ui::MainWindow *ui;
    UserPage * user_page;
    MainPage * main_page;
    CustomPage * custom_page;
    RecomPage * recom_page;
    TestPage * test_page;
signals:
    void signal(int);
};

#endif // MAINWINDOW_H
