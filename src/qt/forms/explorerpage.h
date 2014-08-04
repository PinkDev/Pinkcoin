#ifndef EXPLORERPAGE_H
#define EXPLORERPAGE_H

#include <QWidget>

namespace Ui {
class explorerpage;
}

class explorerpage : public QWidget
{
    Q_OBJECT

public:
    explicit explorerpage(QWidget *parent = 0);
    ~explorerpage();

private:
    Ui::explorerpage *ui;
};

#endif // EXPLORERPAGE_H
