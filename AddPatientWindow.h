#pragma once
#include <QWidget>
#include "ui_AddPatientWindow.h"
#include "frost_applicationfour.h"

class AddPatientWindow : public QWidget
{
	Q_OBJECT

public:
	AddPatientWindow(QWidget *parent = Q_NULLPTR);
	~AddPatientWindow();
	//static std::priority_queue<Patient, std::vector<Patient*>, Compare> patientList;

private slots:
	void on_AddButton_clicked();
	void on_cancelButton_clicked();
	void on_AddAilmentButton_clicked();
	void on_firstNameEdit_cursorPositionChanged();
	void on_middleNameEdit_cursorPositionChanged();
	void on_lastNameEdit_cursorPositionChanged();
	void on_priorityEdit_cursorPositionChanged();
	void on_suffixEdit_cursorPositionChanged();
	void on_treatedEdit_cursorPositionChanged();
	void on_doctorEdit_cursorPositionChanged();
	void on_ailmentEdit_cursorPositionChanged();

private:
	Ui::AddPatientWindow ui;
	std::vector<QString> ailmentList;
};


