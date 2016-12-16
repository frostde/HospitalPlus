#pragma once

#include <QWidget>
#include "ui_AddBulkWindow.h"
#include "frost_applicationfour.h"

class AddBulkWindow : public QWidget
{
	Q_OBJECT

public:
	AddBulkWindow(QWidget *parent = Q_NULLPTR);
	~AddBulkWindow();

private slots:
	void on_pushButton_2_clicked();
	void on_pushButton_clicked();

private:
	Ui::AddBulkWindow ui;
};
