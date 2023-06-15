#include "housewindow.h"
#include "ui_housewindow.h"
#include <QLabel>
#include <QPushButton>

HouseWindow::HouseWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::HouseWindow){
    ui->setupUi(this);
    ui->houseRegion->setScene(&interiorScene);
    // Crear instancia de Central
    central = new Central(this);
    // Conectar clic del botón PButton a la ranura onPButtonClicked() de HouseWindow
    connect(ui->PButton, SIGNAL(clicked()), this, SLOT(onPButtonClicked()));
    // Conectar clic del botón DButton a la ranura onDButtonClicked() de HouseWindow
    connect(ui->DButton, SIGNAL(clicked()), this, SLOT(onDButtonClicked()));
}
void HouseWindow::addHouseHollow(QGraphicsItemGroup * compoundItem){
    interiorScene.addItem(compoundItem);
}

void HouseWindow::onPButtonClicked(){
    QString text = "Alarm is Armed!";
    ui->Display->setText(text);
    central->setIsArmed(true);
}

void HouseWindow::onDButtonClicked(){
    QString text = "Alarm is Disarmed";
    ui->Display->setText(text);
    central->setIsArmed(false);
}
HouseWindow::~HouseWindow(){
    delete ui;
    delete central;
}

