#pragma once
#include "Patient.h"
#include <QtWidgets/QMainWindow>
#include "ui_frost_applicationfour.h"
#include "AddPatientWindow.h"
#include "NurseWindow.h"
#include "PatientListClass.h"
#include "GlobalPatientList.h"
#include <queue>
#include "DoctorWindow.h"
#include "AdministratorWindow.h"
#include "HospitalWindow.h"
#include "HelpWindow.h"
#include <qmessagebox.h>
#include "DoctorPrintPatient.h"
#include "AddBulkWindow.h"
#include "HospitalPrintPatient.h"
#include <algorithm>
#include <qtimer.h>
#include "Logger.h"
#include "QueryPatientWindow.h"

class frost_applicationfour : public QMainWindow
{
    Q_OBJECT

public:
    frost_applicationfour(QWidget *parent = Q_NULLPTR);

private slots:
	void on_NurseButton_clicked();
	void on_DoctorButton_clicked();
	void on_AdministratorButton_clicked();
	void on_HospitalButton_clicked();
	void on_HelpButton_clicked();

private:
    Ui::frost_applicationfourClass ui;
};
