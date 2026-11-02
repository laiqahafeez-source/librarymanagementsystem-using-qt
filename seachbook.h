#ifndef SEACHBOOK_H
#define SEACHBOOK_H

#include <QWidget>

namespace Ui {
class seachbook;
}

class seachbook : public QWidget
{
    Q_OBJECT

public:
    explicit seachbook(QWidget *parent = nullptr);
    ~seachbook();

private:
    Ui::seachbook *ui;
};

#endif // SEACHBOOK_H
