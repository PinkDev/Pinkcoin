#ifndef WALLETPINK_H
#define WALLETPINK_H

#include <QWidget>
#include <QtWebKitWidgets/QWebView>

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

namespace Ui {
    class WalletPink;
}
class WalletModel;

/** WalletPink widget */
class WalletPink : public QWidget
{
    Q_OBJECT

public:
    explicit WalletPink(QWidget *parent = 0);
    ~WalletPink();

    void setModel(WalletModel *model);

private:
    Ui::WalletPink *ui;
    WalletModel *model;

};

#endif // WalletPink_H
