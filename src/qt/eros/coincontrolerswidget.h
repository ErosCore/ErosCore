// Copyright (c) 2020 The EROS developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLERSWIDGET_H
#define COINCONTROLERSWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlErsWidget;
}

class CoinControlErsWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlErsWidget(QWidget *parent = nullptr);
    ~CoinControlErsWidget();

private:
    Ui::CoinControlErsWidget *ui;
};

#endif // COINCONTROLERSWIDGET_H
