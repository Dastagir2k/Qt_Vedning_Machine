#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT // Ensure this macro is present

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void viewCartClicked();
    void backToHomeClicked();
    void payClicked();
    void confirmClicked();
    void payBtn5Clicked();
    void payBtn10Clicked();
    void addCokeClicked();
    void addPepsiClicked();
    void addLaysClicked();
    void addDiaryMilkClicked();
    void addHideSeekClicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
