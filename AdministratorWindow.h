#pragma once

#include <QWidget>
#include "ui_AdministratorWindow.h"
#include "frost_applicationfour.h"

class AdministratorWindow : public QWidget
{
	Q_OBJECT

public:
	AdministratorWindow(QWidget *parent = Q_NULLPTR);
	~AdministratorWindow();

private slots:
	void on_CancelButton_clicked();
	void on_AddBulkPatientsButton_clicked();

private:
	Ui::AdministratorWindow ui;
};
