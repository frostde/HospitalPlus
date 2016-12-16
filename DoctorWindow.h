#pragma once
#include <QWidget>
#include "ui_DoctorWindow.h"
#include "frost_applicationfour.h"


class DoctorWindow : public QWidget
{
	Q_OBJECT

public:
	DoctorWindow(QWidget *parent = Q_NULLPTR);
	~DoctorWindow();

private slots:
	void on_cancelButton_clicked();
	void on_treatPatientButton_clicked();
	void on_printPatientButton_clicked();
	void on_QueryButton_clicked();


private:
	Ui::DoctorWindow ui;
};
