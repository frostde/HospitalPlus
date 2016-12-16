#pragma once

#include <QWidget>
#include "frost_applicationfour.h"
#include "ui_NurseWindow.h"

class NurseWindow : public QWidget
{
	Q_OBJECT

public:
	NurseWindow(QWidget *parent = Q_NULLPTR);
	~NurseWindow();

private slots:
	void on_AddPatientButton_clicked();
	void on_cancelButton_clicked();

private:
	Ui::NurseWindow ui;
};
