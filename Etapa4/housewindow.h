#ifndef HOUSEWINDOW_H
#define HOUSEWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItemGroup>
#include <QGraphicsProxyWidget>
#include "central.h"

QT_BEGIN_NAMESPACE
namespace Ui { class HouseWindow; }
QT_END_NAMESPACE

class HouseWindow : public QMainWindow{
    Q_OBJECT
    public:
        HouseWindow(QWidget *parent = nullptr);
        void addHouseHollow(QGraphicsItemGroup * ); // doors and windows
        ~HouseWindow();
    private slots:
        void onPButtonClicked();
        void onDButtonClicked();
    private:
        Ui::HouseWindow *ui;
        QGraphicsScene interiorScene;
        Central *central;
};

#endif // HOUSEWINDOW_H
