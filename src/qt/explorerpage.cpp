#include "explorerpage.h"
#include "ui_explorerpage.h"

#include <QUrl>
#include <QSsl>
#include <QWidget>
#include <QtWebKitWidgets/QWebView>

ExplorerPage::ExplorerPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExplorerPage)
{
    ui->setupUi(this);
    ui->xView->load(QUrl("http://chainz.cryptoid.info/pc/"));

}

ExplorerPage::~ExplorerPage()
{
    delete ui;
}

void ExplorerPage::setModel(WalletModel *model)
{
    this->model = model;

}

