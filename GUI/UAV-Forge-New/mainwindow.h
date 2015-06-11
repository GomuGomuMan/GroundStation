/* This is the header file for the MainWindow class. For information about
 * this class and its functions, see comments on the top of mainwindow.cpp.
 *
 * File added sometime prior to April 30 2015.
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
// <<<<<<< HEAD
#include <QShortcut>
#include <QPixmap>
#include <QDebug>
// =======

// >>>>>>> 4657e7a59454d03e9c48944178e4cdad163200a6
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
    //button actions
    void openTutorial();
    void missionPlanningClicked();
    void missionExecutionClicked();
    void missionRecapClicked();

    //quit command
    void on_actionQuit_triggered();

private:
    Ui::MainWindow *ui;
    QPropertyAnimation *animation;
};

#endif // MAINWINDOW_H
