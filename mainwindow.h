#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>

class Snake;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *) override;
    void keyPressEvent(QKeyEvent *) override;

private:
    std::shared_ptr<Snake> m_snake = nullptr;
};

#endif // MAINWINDOW_H
