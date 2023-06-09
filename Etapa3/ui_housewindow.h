/********************************************************************************
** Form generated from reading UI file 'housewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUSEWINDOW_H
#define UI_HOUSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HouseWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *houseRegion;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QGraphicsView *alarmRegion;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HouseWindow)
    {
        if (HouseWindow->objectName().isEmpty())
            HouseWindow->setObjectName(QString::fromUtf8("HouseWindow"));
        HouseWindow->resize(825, 505);
        centralwidget = new QWidget(HouseWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 10, 801, 431));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        houseRegion = new QGraphicsView(horizontalLayoutWidget);
        houseRegion->setObjectName(QString::fromUtf8("houseRegion"));

        horizontalLayout->addWidget(houseRegion);

        line = new QFrame(horizontalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        horizontalLayout->addLayout(verticalLayout);

        alarmRegion = new QGraphicsView(horizontalLayoutWidget);
        alarmRegion->setObjectName(QString::fromUtf8("alarmRegion"));
        alarmRegion->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        horizontalLayout->addWidget(alarmRegion);

        HouseWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HouseWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 825, 33));
        HouseWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HouseWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HouseWindow->setStatusBar(statusbar);

        retranslateUi(HouseWindow);

        QMetaObject::connectSlotsByName(HouseWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HouseWindow)
    {
        HouseWindow->setWindowTitle(QCoreApplication::translate("HouseWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HouseWindow: public Ui_HouseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUSEWINDOW_H
