#pragma once

#include <QWidget>
#include "ui_HelpWindow.h"
#include "frost_applicationfour.h"

class HelpWindow : public QWidget
{
	Q_OBJECT

public:
	HelpWindow(QWidget *parent = Q_NULLPTR);
	~HelpWindow();

private slots:
	void on_cancelbutton_clicked();
private:
	Ui::HelpWindow ui;
};
