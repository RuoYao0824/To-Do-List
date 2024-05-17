#include "superchickenlist.h"
#include "./ui_superchickenlist.h"

SuperChickenList::SuperChickenList(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SuperChickenList)
{
    ui->setupUi(this);
}

SuperChickenList::~SuperChickenList()
{
    delete ui;
}
