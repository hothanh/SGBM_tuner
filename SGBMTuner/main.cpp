/*
 *    Filename: main.cc
 *  Created on: Oct 24, 2017
 *      Author: Timo Hinzmann, based on "vmarquet/opencv-disparity-map-tuner"
 *   Institute: ETH Zurich, Autonomous Systems Lab
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
