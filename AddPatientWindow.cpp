#include "ui_AddPatientWindow.h"
#include <QDialog>
#include <qmessagebox.h>
#include "frost_applicationfour.h"

using namespace GlobalPatientList;

AddPatientWindow::AddPatientWindow(QWidget *parent)
	: QWidget(parent) {
	ui.setupUi(this);
}

AddPatientWindow::~AddPatientWindow() {

}

void AddPatientWindow::on_cancelButton_clicked() {
	NurseWindow* nw = new NurseWindow();
	nw->show();
	close();
}

void AddPatientWindow::on_AddButton_clicked() {
	QString fName = ui.firstNameEdit->text();
	QString mName = ui.middleNameEdit->text();
	QString lName = ui.lastNameEdit->text();
	QString suffixValue = ui.suffixEdit->text();
	QString doctorValue = ui.doctorEdit->text();
	int treatedValue = ui.treatedEdit->text().toInt();
	int priorityValue = ui.priorityEdit->text().toInt();
	if (fName == "" || lName == "" || priorityValue == NULL || ((treatedValue != 1) && (treatedValue != 0))) QMessageBox::information(this, tr("Error"), tr("Please enter a valid value in all required fields."));
	else {
		Patient* pat = new Patient(fName, mName, lName, suffixValue, ailmentList, doctorValue, treatedValue, priorityValue);
		Logger::log(pat, 0);
		patientList.push(pat);
		QMessageBox::information(this, tr("Added!"), tr("Successfully added a patient."));
	}
}


void AddPatientWindow::on_AddAilmentButton_clicked() {
	QString ailment = ui.ailmentEdit->text();
	ailmentList.push_back(ailment);
	ui.ailmentEdit->setText(" ");
}

void AddPatientWindow::on_firstNameEdit_cursorPositionChanged(){
	ui.firstNameEdit->setText(" ");
}

void AddPatientWindow::on_middleNameEdit_cursorPositionChanged() {
	ui.middleNameEdit->setText(" ");
}

void AddPatientWindow::on_lastNameEdit_cursorPositionChanged() {
	ui.lastNameEdit->setText(" ");
}

void AddPatientWindow::on_priorityEdit_cursorPositionChanged() {
	ui.priorityEdit->setText(" ");
}

void AddPatientWindow::on_suffixEdit_cursorPositionChanged() {
	ui.suffixEdit->setText(" ");
}

void AddPatientWindow::on_treatedEdit_cursorPositionChanged() {
	ui.treatedEdit->setText(" ");
}

void AddPatientWindow::on_doctorEdit_cursorPositionChanged() {
	ui.doctorEdit->setText(" ");
}

void AddPatientWindow::on_ailmentEdit_cursorPositionChanged() {
	ui.ailmentEdit->setText(" ");
}
