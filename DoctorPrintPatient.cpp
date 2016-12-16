#include "DoctorPrintPatient.h"

using namespace GlobalPatientList;

DoctorPrintPatient::DoctorPrintPatient(QWidget *parent) : QWidget(parent)  {
	ui.setupUi(this);
}

DoctorPrintPatient::~DoctorPrintPatient() {
}



void DoctorPrintPatient::on_NextPatientButton_clicked() {
	if (patientList.empty()) QMessageBox::information(this, tr("Empty"), tr("There are no patient's in the queue."));
	else {
		ui.PatientBrowser->setText("The following patient has the highest priorty:\n ");
		QString info = patientList.top()->print();
		ui.PatientBrowser->append(info);
	}
}

void DoctorPrintPatient::on_pushButton_2_clicked() {
	DoctorWindow* dw = new DoctorWindow();
	dw->show();
	close();
}

void DoctorPrintPatient::on_PrintAllButton_clicked() {
	if (treatedList.empty()) QMessageBox::information(this, tr("Empty"), tr("No patient's have been treated."));
	else {
		ui.PatientBrowser->setText("The following patient's have already been treated:\n");
		for (int i = 0; i < treatedList.size(); i++) ui.PatientBrowser->append(treatedList[i]->print());
	}
}
