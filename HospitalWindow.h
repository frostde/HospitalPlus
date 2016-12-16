#pragma once

#include <QWidget>
#include "ui_HospitalWindow.h"
#include "frost_applicationfour.h"

class HospitalWindow : public QWidget
{
	Q_OBJECT

public:
	HospitalWindow(QWidget *parent = Q_NULLPTR);
	~HospitalWindow();

private slots:
	void on_cancelbutton_clicked();
	void on_printTriageButton_clicked();
	void on_treatAllPatientsButton_clicked();

private:
	Ui::HospitalWindow ui;
};
