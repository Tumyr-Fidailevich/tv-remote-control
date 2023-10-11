#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

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
    int _channelNumber = 0;
    int _volumeValue = 0;
    void _selectChannel(int channelNumber);
    void _changeVolume(int volumeValue);
public slots:
    void selectChannel_1();
    void selectChannel_2();
    void selectChannel_3();
    void selectChannel_4();
    void selectChannel_5();
    void selectChannel_6();
    void selectChannel_7();
    void selectChannel_8();
    void selectChannel_9();
    void selectChannel_0();
    void increaseChannel();
    void decreaseChannel();
    void increaseVolume();
    void decreaseVolume();
};
#endif // MAINWINDOW_H
