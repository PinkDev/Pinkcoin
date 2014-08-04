#include "explorerpage.h"
#include "ui_explorerpage.h"

explorerpage::explorerpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::explorerpage)
{
    ui->setupUi(this);
}

explorerpage::~explorerpage()
{
    delete ui;
}
