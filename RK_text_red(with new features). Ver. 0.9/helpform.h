#ifndef HELPFORM_H
#define HELPFORM_H

#include <QWidget>

namespace Ui {
class HelpForm;
}

class HelpForm : public QWidget{
    Q_OBJECT

public:
    explicit HelpForm(QWidget *parent = nullptr);
    ~HelpForm();

private slots:
    void on_pushButton_clicked();
    void changeEventHelp(QEvent *event);

private:
    void Init();

private:
    Ui::HelpForm *ui;
};

#endif // HELPFORM_H
