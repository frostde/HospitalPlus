#include "DoctorWindow.h"

using namespace GlobalPatientList;

DoctorWindow::DoctorWindow(QWidget *parent)
	: QWidget(parent) {
	ui.setupUi(this);
}

DoctorWindow::~DoctorWindow() {

}

void DoctorWindow::on_treatPatientButton_clicked() {
	if (patientList.empty()) QMessageBox::information(this, tr("Empty"), tr("There are no patients awaiting treatment."));
	else {
		QMessageBox::information(this, tr("Treated"), tr("Treated the patient with the highest priority."));
		patientList.top()->setTreated();
		Logger::log(patientList.top(), 1);
		treatedList.push_back(patientList.top());
		patientList.pop();
	}


}

void DoctorWindow::on_printPatientButton_clicked(){
	DoctorPrintPatient* dpp = new DoctorPrintPatient();
	dpp->show();
	close();

}

void DoctorWindow::on_cancelButton_clicked() {
	frost_applicationfour* faf = new frost_applicationfour();
	faf->show();
	close();
}

void DoctorWindow::on_QueryButton_clicked() {
	QueryPatientWindow* qpw = new QueryPatientWindow();
	qpw->show();
	close();
}


