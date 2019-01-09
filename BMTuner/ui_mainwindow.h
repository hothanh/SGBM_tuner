/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_buttons;
    QSlider *horizontalSlider_num_of_disparity;
    QSlider *horizontalSlider_speckle_window_size;
    QLabel *label_6;
    QSlider *horizontalSlider_pre_filter_size;
    QLabel *label;
    QLabel *label_pre_filter_size;
    QLabel *label_min_disparity;
    QLabel *label_num_of_disparity;
    QSlider *horizontalSlider_min_disparity;
    QLabel *label_8;
    QLabel *label_3;
    QSlider *horizontalSlider_texture_threshold;
    QLabel *label_SAD_window_size;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_5;
    QSlider *horizontalSlider_SAD_window_size;
    QSlider *horizontalSlider_uniqueness_ratio;
    QLabel *label_uniqueness_ratio;
    QPushButton *pushButton_right;
    QPushButton *pushButton_left;
    QLabel *label_speckle_window_size;
    QLabel *label_pre_filter_cap;
    QLabel *label_speckle_range;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_texture_threshold;
    QSlider *horizontalSlider_speckle_range;
    QSlider *horizontalSlider_pre_filter_cap;
    QLabel *label_disp_12_max_diff;
    QLabel *label_10;
    QSlider *horizontalSlider_disp_12_max_diff;
    QLabel *label_depth_map;
    QLabel *label_image_right;
    QLabel *label_image_left;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(646, 493);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_buttons = new QGridLayout();
        gridLayout_buttons->setSpacing(6);
        gridLayout_buttons->setObjectName(QStringLiteral("gridLayout_buttons"));
        horizontalSlider_num_of_disparity = new QSlider(centralWidget);
        horizontalSlider_num_of_disparity->setObjectName(QStringLiteral("horizontalSlider_num_of_disparity"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalSlider_num_of_disparity->sizePolicy().hasHeightForWidth());
        horizontalSlider_num_of_disparity->setSizePolicy(sizePolicy);
        horizontalSlider_num_of_disparity->setMinimum(16);
        horizontalSlider_num_of_disparity->setMaximum(256);
        horizontalSlider_num_of_disparity->setSingleStep(16);
        horizontalSlider_num_of_disparity->setPageStep(16);
        horizontalSlider_num_of_disparity->setValue(128);
        horizontalSlider_num_of_disparity->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_num_of_disparity, 5, 1, 1, 1);

        horizontalSlider_speckle_window_size = new QSlider(centralWidget);
        horizontalSlider_speckle_window_size->setObjectName(QStringLiteral("horizontalSlider_speckle_window_size"));
        sizePolicy.setHeightForWidth(horizontalSlider_speckle_window_size->sizePolicy().hasHeightForWidth());
        horizontalSlider_speckle_window_size->setSizePolicy(sizePolicy);
        horizontalSlider_speckle_window_size->setMaximum(250);
        horizontalSlider_speckle_window_size->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_speckle_window_size, 8, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_buttons->addWidget(label_6, 6, 2, 1, 1);

        horizontalSlider_pre_filter_size = new QSlider(centralWidget);
        horizontalSlider_pre_filter_size->setObjectName(QStringLiteral("horizontalSlider_pre_filter_size"));
        sizePolicy.setHeightForWidth(horizontalSlider_pre_filter_size->sizePolicy().hasHeightForWidth());
        horizontalSlider_pre_filter_size->setSizePolicy(sizePolicy);
        horizontalSlider_pre_filter_size->setMinimum(5);
        horizontalSlider_pre_filter_size->setMaximum(255);
        horizontalSlider_pre_filter_size->setSingleStep(2);
        horizontalSlider_pre_filter_size->setValue(41);
        horizontalSlider_pre_filter_size->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_pre_filter_size, 1, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_buttons->addWidget(label, 1, 2, 1, 1);

        label_pre_filter_size = new QLabel(centralWidget);
        label_pre_filter_size->setObjectName(QStringLiteral("label_pre_filter_size"));

        gridLayout_buttons->addWidget(label_pre_filter_size, 1, 0, 1, 1);

        label_min_disparity = new QLabel(centralWidget);
        label_min_disparity->setObjectName(QStringLiteral("label_min_disparity"));

        gridLayout_buttons->addWidget(label_min_disparity, 4, 0, 1, 1);

        label_num_of_disparity = new QLabel(centralWidget);
        label_num_of_disparity->setObjectName(QStringLiteral("label_num_of_disparity"));

        gridLayout_buttons->addWidget(label_num_of_disparity, 5, 0, 1, 1);

        horizontalSlider_min_disparity = new QSlider(centralWidget);
        horizontalSlider_min_disparity->setObjectName(QStringLiteral("horizontalSlider_min_disparity"));
        sizePolicy.setHeightForWidth(horizontalSlider_min_disparity->sizePolicy().hasHeightForWidth());
        horizontalSlider_min_disparity->setSizePolicy(sizePolicy);
        horizontalSlider_min_disparity->setMinimum(-300);
        horizontalSlider_min_disparity->setMaximum(100);
        horizontalSlider_min_disparity->setSingleStep(1);
        horizontalSlider_min_disparity->setPageStep(10);
        horizontalSlider_min_disparity->setValue(-64);
        horizontalSlider_min_disparity->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_min_disparity, 4, 1, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_buttons->addWidget(label_8, 8, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_buttons->addWidget(label_3, 3, 2, 1, 1);

        horizontalSlider_texture_threshold = new QSlider(centralWidget);
        horizontalSlider_texture_threshold->setObjectName(QStringLiteral("horizontalSlider_texture_threshold"));
        sizePolicy.setHeightForWidth(horizontalSlider_texture_threshold->sizePolicy().hasHeightForWidth());
        horizontalSlider_texture_threshold->setSizePolicy(sizePolicy);
        horizontalSlider_texture_threshold->setMaximum(255);
        horizontalSlider_texture_threshold->setValue(10);
        horizontalSlider_texture_threshold->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_texture_threshold, 6, 1, 1, 1);

        label_SAD_window_size = new QLabel(centralWidget);
        label_SAD_window_size->setObjectName(QStringLiteral("label_SAD_window_size"));

        gridLayout_buttons->addWidget(label_SAD_window_size, 3, 0, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_buttons->addWidget(label_9, 9, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_buttons->addWidget(label_2, 2, 2, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_buttons->addWidget(label_5, 5, 2, 1, 1);

        horizontalSlider_SAD_window_size = new QSlider(centralWidget);
        horizontalSlider_SAD_window_size->setObjectName(QStringLiteral("horizontalSlider_SAD_window_size"));
        sizePolicy.setHeightForWidth(horizontalSlider_SAD_window_size->sizePolicy().hasHeightForWidth());
        horizontalSlider_SAD_window_size->setSizePolicy(sizePolicy);
        horizontalSlider_SAD_window_size->setMinimum(5);
        horizontalSlider_SAD_window_size->setMaximum(255);
        horizontalSlider_SAD_window_size->setSingleStep(2);
        horizontalSlider_SAD_window_size->setValue(41);
        horizontalSlider_SAD_window_size->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_SAD_window_size, 3, 1, 1, 1);

        horizontalSlider_uniqueness_ratio = new QSlider(centralWidget);
        horizontalSlider_uniqueness_ratio->setObjectName(QStringLiteral("horizontalSlider_uniqueness_ratio"));
        sizePolicy.setHeightForWidth(horizontalSlider_uniqueness_ratio->sizePolicy().hasHeightForWidth());
        horizontalSlider_uniqueness_ratio->setSizePolicy(sizePolicy);
        horizontalSlider_uniqueness_ratio->setMaximum(255);
        horizontalSlider_uniqueness_ratio->setValue(15);
        horizontalSlider_uniqueness_ratio->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_uniqueness_ratio, 7, 1, 1, 1);

        label_uniqueness_ratio = new QLabel(centralWidget);
        label_uniqueness_ratio->setObjectName(QStringLiteral("label_uniqueness_ratio"));

        gridLayout_buttons->addWidget(label_uniqueness_ratio, 7, 0, 1, 1);

        pushButton_right = new QPushButton(centralWidget);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));

        gridLayout_buttons->addWidget(pushButton_right, 0, 1, 1, 1);

        pushButton_left = new QPushButton(centralWidget);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));

        gridLayout_buttons->addWidget(pushButton_left, 0, 0, 1, 1);

        label_speckle_window_size = new QLabel(centralWidget);
        label_speckle_window_size->setObjectName(QStringLiteral("label_speckle_window_size"));

        gridLayout_buttons->addWidget(label_speckle_window_size, 8, 0, 1, 1);

        label_pre_filter_cap = new QLabel(centralWidget);
        label_pre_filter_cap->setObjectName(QStringLiteral("label_pre_filter_cap"));

        gridLayout_buttons->addWidget(label_pre_filter_cap, 2, 0, 1, 1);

        label_speckle_range = new QLabel(centralWidget);
        label_speckle_range->setObjectName(QStringLiteral("label_speckle_range"));

        gridLayout_buttons->addWidget(label_speckle_range, 9, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_buttons->addWidget(label_4, 4, 2, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_buttons->addWidget(label_7, 7, 2, 1, 1);

        label_texture_threshold = new QLabel(centralWidget);
        label_texture_threshold->setObjectName(QStringLiteral("label_texture_threshold"));

        gridLayout_buttons->addWidget(label_texture_threshold, 6, 0, 1, 1);

        horizontalSlider_speckle_range = new QSlider(centralWidget);
        horizontalSlider_speckle_range->setObjectName(QStringLiteral("horizontalSlider_speckle_range"));
        sizePolicy.setHeightForWidth(horizontalSlider_speckle_range->sizePolicy().hasHeightForWidth());
        horizontalSlider_speckle_range->setSizePolicy(sizePolicy);
        horizontalSlider_speckle_range->setMinimum(0);
        horizontalSlider_speckle_range->setMaximum(3);
        horizontalSlider_speckle_range->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_speckle_range, 9, 1, 1, 1);

        horizontalSlider_pre_filter_cap = new QSlider(centralWidget);
        horizontalSlider_pre_filter_cap->setObjectName(QStringLiteral("horizontalSlider_pre_filter_cap"));
        sizePolicy.setHeightForWidth(horizontalSlider_pre_filter_cap->sizePolicy().hasHeightForWidth());
        horizontalSlider_pre_filter_cap->setSizePolicy(sizePolicy);
        horizontalSlider_pre_filter_cap->setMinimum(1);
        horizontalSlider_pre_filter_cap->setMaximum(63);
        horizontalSlider_pre_filter_cap->setValue(31);
        horizontalSlider_pre_filter_cap->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_pre_filter_cap, 2, 1, 1, 1);

        label_disp_12_max_diff = new QLabel(centralWidget);
        label_disp_12_max_diff->setObjectName(QStringLiteral("label_disp_12_max_diff"));

        gridLayout_buttons->addWidget(label_disp_12_max_diff, 10, 0, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_buttons->addWidget(label_10, 10, 2, 1, 1);

        horizontalSlider_disp_12_max_diff = new QSlider(centralWidget);
        horizontalSlider_disp_12_max_diff->setObjectName(QStringLiteral("horizontalSlider_disp_12_max_diff"));
        sizePolicy.setHeightForWidth(horizontalSlider_disp_12_max_diff->sizePolicy().hasHeightForWidth());
        horizontalSlider_disp_12_max_diff->setSizePolicy(sizePolicy);
        horizontalSlider_disp_12_max_diff->setMinimum(-1);
        horizontalSlider_disp_12_max_diff->setMaximum(100);
        horizontalSlider_disp_12_max_diff->setValue(-1);
        horizontalSlider_disp_12_max_diff->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_disp_12_max_diff, 10, 1, 1, 1);


        gridLayout->addLayout(gridLayout_buttons, 2, 0, 1, 1);

        label_depth_map = new QLabel(centralWidget);
        label_depth_map->setObjectName(QStringLiteral("label_depth_map"));
        label_depth_map->setMaximumSize(QSize(480, 360));
        label_depth_map->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_depth_map, 2, 1, 1, 1);

        label_image_right = new QLabel(centralWidget);
        label_image_right->setObjectName(QStringLiteral("label_image_right"));
        label_image_right->setMaximumSize(QSize(480, 360));
        label_image_right->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_image_right, 0, 1, 1, 1);

        label_image_left = new QLabel(centralWidget);
        label_image_left->setObjectName(QStringLiteral("label_image_left"));
        label_image_left->setMaximumSize(QSize(480, 360));
        label_image_left->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_image_left, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_pre_filter_size, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_pre_filter_cap, SIGNAL(valueChanged(int)), label_2, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_SAD_window_size, SIGNAL(valueChanged(int)), label_3, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_min_disparity, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_num_of_disparity, SIGNAL(valueChanged(int)), label_5, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_texture_threshold, SIGNAL(valueChanged(int)), label_6, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_uniqueness_ratio, SIGNAL(valueChanged(int)), label_7, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_speckle_window_size, SIGNAL(valueChanged(int)), label_8, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_speckle_range, SIGNAL(valueChanged(int)), label_9, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_disp_12_max_diff, SIGNAL(valueChanged(int)), label_10, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "OpenCV StereoCorrespondenceBM Tuner", 0));
        label_6->setText(QApplication::translate("MainWindow", "10", 0));
        label->setText(QApplication::translate("MainWindow", "41", 0));
        label_pre_filter_size->setText(QApplication::translate("MainWindow", "Pre-filter size", 0));
#ifndef QT_NO_TOOLTIP
        label_min_disparity->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Minimum possible disparity value. Normally, it is zero but sometimes rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_min_disparity->setText(QApplication::translate("MainWindow", "Minimum disparity", 0));
#ifndef QT_NO_TOOLTIP
        label_num_of_disparity->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Maximum disparity minus minimum disparity. The value is always greater than zero. In the current implementation, this parameter must be divisible by 16.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_num_of_disparity->setText(QApplication::translate("MainWindow", "Number of disparity", 0));
        label_8->setText(QApplication::translate("MainWindow", "0", 0));
        label_3->setText(QApplication::translate("MainWindow", "41", 0));
#ifndef QT_NO_TOOLTIP
        label_SAD_window_size->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Matched block size. It must be an odd number <span style=\" font-family:'Courier New,courier';\">&gt;=1</span> . Normally, it should be somewhere in the <span style=\" font-family:'Courier New,courier';\">3..11</span> range.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_SAD_window_size->setText(QApplication::translate("MainWindow", "SAD window size", 0));
        label_9->setText(QApplication::translate("MainWindow", "0", 0));
        label_2->setText(QApplication::translate("MainWindow", "31", 0));
        label_5->setText(QApplication::translate("MainWindow", "128", 0));
#ifndef QT_NO_TOOLTIP
        label_uniqueness_ratio->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Margin in percentage by which the best (minimum) computed cost function value should \342\200\234win\342\200\235 the second best value to consider the found match correct. Normally, a value within the 5-15 range is good enough.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_uniqueness_ratio->setText(QApplication::translate("MainWindow", "Uniqueness ratio", 0));
        pushButton_right->setText(QApplication::translate("MainWindow", "Load right image", 0));
        pushButton_left->setText(QApplication::translate("MainWindow", "Load left image", 0));
#ifndef QT_NO_TOOLTIP
        label_speckle_window_size->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Maximum size of smooth disparity regions to consider their noise speckles and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the 50-200 range.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_speckle_window_size->setText(QApplication::translate("MainWindow", "Speckle window size", 0));
#ifndef QT_NO_TOOLTIP
        label_pre_filter_cap->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Truncation value for the prefiltered image pixels. The algorithm first computes x-derivative at each pixel and clips its value by <span style=\" font-family:'Courier New,courier';\">[-preFilterCap, preFilterCap]</span> interval. The result values are passed to the Birchfield-Tomasi pixel cost function.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_pre_filter_cap->setText(QApplication::translate("MainWindow", "Pre-filter cap", 0));
#ifndef QT_NO_TOOLTIP
        label_speckle_range->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Maximum disparity variation within each connected component. If you do speckle filtering, set the parameter to a positive value, it will be implicitly multiplied by 16. Normally, 1 or 2 is good enough.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_speckle_range->setText(QApplication::translate("MainWindow", "Speckle range", 0));
        label_4->setText(QApplication::translate("MainWindow", "-64", 0));
        label_7->setText(QApplication::translate("MainWindow", "15", 0));
        label_texture_threshold->setText(QApplication::translate("MainWindow", "Texture threshold", 0));
#ifndef QT_NO_TOOLTIP
        label_disp_12_max_diff->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Maximum allowed difference (in integer pixel units) in the left-right disparity check. Set it to a non-positive value to disable the check.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_disp_12_max_diff->setText(QApplication::translate("MainWindow", "Disp. 12 max. diff.", 0));
        label_10->setText(QApplication::translate("MainWindow", "-1", 0));
        label_depth_map->setText(QApplication::translate("MainWindow", "Depth map", 0));
        label_image_right->setText(QApplication::translate("MainWindow", "Right image", 0));
        label_image_left->setText(QApplication::translate("MainWindow", "Left image", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
