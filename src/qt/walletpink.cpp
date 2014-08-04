#include "walletpink.h"
#include "ui_walletpink.h"

#include <QUrl>
#include <QSsl>
#include <QWidget>
#include <QtWebKitWidgets/QWebView>


/*

#include "walletmodel.h"

#include "bitcoinunits.h"
#include "optionsmodel.h"
#include "transactiontablemodel.h"
#include "transactionfilterproxy.h"

#include "guiutil.h"
#include "guiconstants.h"

#include <QAbstractItemDelegate>
#include <QPainter>


#define DECORATION_SIZE 64
#define NUM_ITEMS 3

class TxViewDelegate : public QAbstractItemDelegate
{
    Q_OBJECT
public:
    TxViewDelegate(): QAbstractItemDelegate()
    {

    }

    inline void paint(QPainter *painter, const QStyleOptionViewItem &option,
                      const QModelIndex &index ) const
    {
        painter->save();

        QIcon icon = qvariant_cast<QIcon>(index.data(Qt::DecorationRole));
        QRect mainRect = option.rect;
        QRect decorationRect(mainRect.topLeft(), QSize(DECORATION_SIZE, DECORATION_SIZE));

        icon.paint(painter, decorationRect);

    }

    inline QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        return QSize(DECORATION_SIZE, DECORATION_SIZE);
    }



};

*/


WalletPink::WalletPink(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WalletPink)
{
    ui->setupUi(this);
    ui->wview->load(QUrl("http://chainz.cryptoid.info/pc/"));

}

WalletPink::~WalletPink()
{
    delete ui;
}

void WalletPink::setModel(WalletModel *model)
{
    this->model = model;

}

