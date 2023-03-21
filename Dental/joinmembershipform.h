#ifndef JOINMEMBERSHIPFORM_H
#define JOINMEMBERSHIPFORM_H

#include <QWidget>

namespace Ui {
class JoinmembershipForm;
}

class JoinmembershipForm : public QWidget
{
    Q_OBJECT

public:
    explicit JoinmembershipForm(QWidget *parent = nullptr);
    ~JoinmembershipForm();

private:
    Ui::JoinmembershipForm *ui;
};

#endif // JOINMEMBERSHIPFORM_H
