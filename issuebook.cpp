#include "issuebook.h"
#include "ui_issuebook.h"

issuebook::issuebook(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::issuebook)
{
    ui->setupUi(this);
}

issuebook::~issuebook()
{
    delete ui;
}
