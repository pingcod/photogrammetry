#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionIntroduction_triggered();

    void on_actionResection_triggered();

    void on_actionResampling_triggered();

    void on_actionNearest_Neighborhood_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
