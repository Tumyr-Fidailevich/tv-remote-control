#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::_selectChannel(int channelNumber)
{
    QString channel = QString("Channel: %1").arg(QString::number(channelNumber));
    ui->channelStatusLable->setText(channel);
    _channelNumber = channelNumber;
}

void MainWindow::_changeVolume(int volumeValue)
{
    QString volume = QString("Volume: %1%").arg(QString::number(volumeValue));
    ui->volumeStatusLable->setText(volume);
    _volumeValue = volumeValue;
}

void MainWindow::selectChannel_1()
{
    _selectChannel(1);
}

void MainWindow::selectChannel_2()
{
    _selectChannel(2);
}

void MainWindow::selectChannel_3()
{
    _selectChannel(3);
}

void MainWindow::selectChannel_4()
{
    _selectChannel(4);
}

void MainWindow::selectChannel_5()
{
    _selectChannel(5);
}

void MainWindow::selectChannel_6()
{
    _selectChannel(6);
}

void MainWindow::selectChannel_7()
{
    _selectChannel(7);
}
void MainWindow::selectChannel_8()
{
    _selectChannel(8);
}
void MainWindow::selectChannel_9()
{
    _selectChannel(9);
}

void MainWindow::selectChannel_0()
{
    _selectChannel(0);
}

void MainWindow::increaseChannel()
{
    if(_channelNumber == 9)
    {
        _channelNumber = 0;
    }else
    {
         _channelNumber++;
    }
    _selectChannel(_channelNumber);
}

void MainWindow::decreaseChannel()
{
    if(_channelNumber == 0)
    {
        _channelNumber = 9;
    }else
    {
         _channelNumber--;
    }
    _selectChannel(_channelNumber);
}

void MainWindow::increaseVolume()
{
    _volumeValue += 10;
    if(_volumeValue > 100) _volumeValue = 100;
    _changeVolume(_volumeValue);
}

void MainWindow::decreaseVolume()
{
    _volumeValue -= 10;
    if(_volumeValue < 0) _volumeValue = 0;
    _changeVolume(_volumeValue);
}
