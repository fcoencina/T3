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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
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
    QVBoxLayout *verticalLayout_5;
    QGraphicsView *Sirena;
    QTextBrowser *Display;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *PButton;
    QPushButton *DButton;

    void setupUi(QMainWindow *HouseWindow)
    {
        if (HouseWindow->objectName().isEmpty())
            HouseWindow->setObjectName(QString::fromUtf8("HouseWindow"));
        HouseWindow->resize(958, 614);
        centralwidget = new QWidget(HouseWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 10, 941, 581));
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

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        Sirena = new QGraphicsView(horizontalLayoutWidget);
        Sirena->setObjectName(QString::fromUtf8("Sirena"));

        verticalLayout_5->addWidget(Sirena);

        Display = new QTextBrowser(horizontalLayoutWidget);
        Display->setObjectName(QString::fromUtf8("Display"));

        verticalLayout_5->addWidget(Display);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(30, -1, 30, -1);
        PButton = new QPushButton(horizontalLayoutWidget);
        PButton->setObjectName(QString::fromUtf8("PButton"));

        horizontalLayout_4->addWidget(PButton);

        DButton = new QPushButton(horizontalLayoutWidget);
        DButton->setObjectName(QString::fromUtf8("DButton"));

        horizontalLayout_4->addWidget(DButton);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_5->setStretch(0, 2);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout_5);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(2, 1);
        HouseWindow->setCentralWidget(centralwidget);

        retranslateUi(HouseWindow);

        QMetaObject::connectSlotsByName(HouseWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HouseWindow)
    {
        HouseWindow->setWindowTitle(QCoreApplication::translate("HouseWindow", "MainWindow", nullptr));
        Display->setHtml(QCoreApplication::translate("HouseWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'FreeSans Italic'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        PButton->setText(QCoreApplication::translate("HouseWindow", "P", nullptr));
        DButton->setText(QCoreApplication::translate("HouseWindow", "D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HouseWindow: public Ui_HouseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUSEWINDOW_H
