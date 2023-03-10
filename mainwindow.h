#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    Ui::MainWindow *ui;

protected:
    void keyPressEvent(QKeyEvent* e) override;

private slots:
    void enter();
    void on_pushButton_del_clicked();
    void on_pushButton_equal_clicked();
};
#endif // MAINWINDOW_H
