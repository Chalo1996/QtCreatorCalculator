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
    void on_plusBTN_clicked();

    void on_minusBTN_clicked();

    void on_mulBTN_clicked();

    void on_devideBTN_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
