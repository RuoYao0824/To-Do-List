#ifndef SUPERCHICKENLIST_H
#define SUPERCHICKENLIST_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SuperChickenList;
}
QT_END_NAMESPACE

class SuperChickenList : public QMainWindow
{
    Q_OBJECT

public:
    SuperChickenList(QWidget *parent = nullptr);
    ~SuperChickenList();

private:
    Ui::SuperChickenList *ui;
};
#endif // SUPERCHICKENLIST_H
