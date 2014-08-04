#ifndef EXPLORERPAGE_H
#define EXPLORERPAGE_H

#include <QWidget>
#include <QtWebKitWidgets/QWebView>

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

namespace Ui {
    class ExplorerPage;
}
class WalletModel;

/** ExplorerPage widget */
class ExplorerPage : public QWidget
{
    Q_OBJECT

public:
    explicit ExplorerPage(QWidget *parent = 0);
    ~ExplorerPage();

    void setModel(WalletModel *model);

private:
    Ui::ExplorerPage *ui;
    WalletModel *model;

};

#endif // ExplorerPage_H
