#ifndef DESKFORM_H
#define DESKFORM_H

#include <QWidget>

namespace Ui {
class DeskForm;
}

class DeskForm : public QWidget
{
    Q_OBJECT

public:
    explicit DeskForm(QWidget *parent = nullptr);
    ~DeskForm();

private:
    Ui::DeskForm *ui;
};

#endif // DESKFORM_H
