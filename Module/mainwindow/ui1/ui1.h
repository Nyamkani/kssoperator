#ifndef UI1_H
#define UI1_H

#include <QDialog>

namespace Ui {
class ui1;
}

class ui1 : public QDialog
{
    Q_OBJECT

public:
    explicit ui1(QWidget *parent = nullptr);
    ~ui1();

private:
    Ui::ui1 *ui;
};

#endif // UI1_H
