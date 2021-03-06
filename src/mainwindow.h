#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "field.h"

#include <QMainWindow>
#include <QScopedPointer>

class QVBoxLayout;

namespace Ui {
class MainWindow;
}

class MainWindow final : public QMainWindow {
    Q_OBJECT

private:
    QScopedPointer<Field> field;
    QSize prefSize();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void restart();

private slots:
    void on_actionExit_triggered();
    void on_actionNew_Game_triggered();
    void on_actionOptions_triggered();
    void on_actionAbout_Minesweeper_triggered();
    void on_actionView_Help_triggered();
    void on_actionStastics_triggered();

private:
    QScopedPointer<Ui::MainWindow> ui;
    QVBoxLayout* tmp_layout;
};

#endif // MAINWINDOW_H
