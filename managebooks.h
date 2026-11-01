#ifndef MANAGEBOOKS_H
#define MANAGEBOOKS_H

#include <QWidget>

namespace Ui {
class ManageBooks;
}

class ManageBooks : public QWidget
{
    Q_OBJECT

public:
    explicit ManageBooks(QWidget *parent = nullptr);
    ~ManageBooks();

private:
    Ui::ManageBooks *ui;
};

#endif // MANAGEBOOKS_H
