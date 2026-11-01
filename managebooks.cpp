#include "managebooks.h"
#include "ui_managebooks.h"

ManageBooks::ManageBooks(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ManageBooks)
{
    ui->setupUi(this);
}

ManageBooks::~ManageBooks()
{
    delete ui;
}
