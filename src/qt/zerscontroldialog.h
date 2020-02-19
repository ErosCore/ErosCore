// Copyright (c) 2017-2020 The EROS developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZERSCONTROLDIALOG_H
#define ZERSCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zers/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZErsControlDialog;
}

class CZErsControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZErsControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZErsControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZErsControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZErsControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZErsControlDialog(QWidget *parent);
    ~ZErsControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZErsControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZErsControlWidgetItem;

private Q_SLOTS:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZERSCONTROLDIALOG_H
