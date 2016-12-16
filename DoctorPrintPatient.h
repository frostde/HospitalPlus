#pragma once
#include <QWidget>
#include "ui_DoctorPrintPatient.h"
#include "frost_applicationfour.h"

class DoctorPrintPatient : public QWidget
{
	Q_OBJECT

public:
	DoctorPrintPatient(QWidget *parent = Q_NULLPTR);
	~DoctorPrintPatient();

private slots:
	void on_NextPatientButton_clicked();
	void on_pushButton_2_clicked();
	void on_PrintAllButton_clicked();

private:
	Ui::DoctorPrintPatient ui;
};
