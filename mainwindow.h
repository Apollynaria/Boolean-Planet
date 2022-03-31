#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //меню
    void on_menu1go_clicked();
    void on_menu2go_clicked();
    void on_menu3go_clicked();
    void on_menu4go_clicked();
    void on_menu5go_clicked();
    void on_menu6go_clicked();
    void on_menu7go_clicked();
    void on_menu8go_clicked();
    void on_menu9go_clicked();
    void on_menu10go_clicked();
    void on_menu11go_clicked();
    void on_menu12go_clicked();

    //1 задание
    void on_pushButton_start1_clicked();

    //2 задание
    void on_pushButton_start2_clicked();

    //3 задание
    void on_pushButton_start3_clicked();

    //4 задание
    void on_pushButton_start4_clicked();

    //5 задание
    void on_pushButton_start5_clicked();

    //6 задание
    void on_pushButton_start6_clicked();

    //7 задание
    void on_pushButton_start7_clicked();

    //8 задание
    void on_pushButton_start8_clicked();

    //9 задание
    void on_pushButton_start9_clicked();

    //10 задание
    void on_pushButton_start10_clicked();

    //11 задание
    void on_pushButton_start11_clicked();
    void on_radioButton_11_no_clicked();
    void on_radioButton_11_yes_clicked();

    //12 задание
    void on_pushButton_start12_clicked();

    //возвращение в меню
    void on_menu_clicked();

    //стартовая страница
    void on_play_clicked();
    void on_menu_exit_clicked();  

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
