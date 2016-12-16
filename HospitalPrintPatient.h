#pragma once

#include <QWidget>
#include "ui_HospitalPrintPatient.h"
#include "frost_applicationfour.h"

class HospitalPrintPatient : public QWidget
{
	Q_OBJECT

public:
	HospitalPrintPatient(QWidget *parent = Q_NULLPTR);
	~HospitalPrintPatient();
private slots:
	void on_pushButton_3_clicked();
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();

private:
	Ui::HospitalPrintPatient ui;
};
