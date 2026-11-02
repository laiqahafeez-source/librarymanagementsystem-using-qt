#include "seachbook.h"
#include "ui_seachbook.h"

seachbook::seachbook(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::seachbook)
{
    ui->setupUi(this);
}

seachbook::~seachbook()
{
    delete ui;
}
