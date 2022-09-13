#ifndef UI2_H
#define UI2_H

#include <QDialog>

namespace Ui {
class ui2;
}

class ui2 : public QDialog
{
    Q_OBJECT

public:
    explicit ui2(QWidget *parent = nullptr);
    ~ui2();

private:
    Ui::ui2 *ui;
};

#endif // UI2_H
