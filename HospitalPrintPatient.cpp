#include "HospitalPrintPatient.h"

using namespace GlobalPatientList;

HospitalPrintPatient::HospitalPrintPatient(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

HospitalPrintPatient::~HospitalPrintPatient()
{
}

void HospitalPrintPatient::on_pushButton_3_clicked() {
	HospitalWindow* hw = new HospitalWindow();
	hw->show();
	close();
}

void HospitalPrintPatient::on_pushButton_clicked() {
	if (patientList.empty()) QMessageBox::information(this, tr("Empty"), tr("There are no patient's awaiting treatment."));
	else {
		std::vector<Patient*> tempPatientList;
		ui.PatientBrowser->setText("The following patients are awaiting treatment:\n ");
		while (!patientList.empty()) {
			tempPatientList.push_back(patientList.top());
			ui.PatientBrowser->append(patientList.top()->print());
			patientList.pop();
		}
		std::vector<Patient*>::iterator itr;
		for (itr = tempPatientList.begin(); itr != tempPatientList.end(); ++itr) patientList.push(*itr);
	}
}

void HospitalPrintPatient::on_pushButton_2_clicked() {
	if (patientList.empty()) QMessageBox::information(this, tr("Empty"), tr("There are no patient's awaiting treatment."));
	std::vector<Patient*> tempPatientList;
	ui.PatientBrowser->setText("Printing out a list of patient's sorted by doctor:\n ");
	while (!patientList.empty()) {
		tempPatientList.push_back(patientList.top());
		patientList.pop();
	}
	int tempListSize = tempPatientList.size();
	std::vector<Patient*>::iterator itr;
	CompareByDoctor comp;
	sort(tempPatientList.begin(), tempPatientList.end(), comp);
	for (int i = 0; i < tempListSize; ++i) {
		ui.PatientBrowser->append(tempPatientList[i]->print());
	}
	for (itr = tempPatientList.begin(); itr != tempPatientList.end(); ++itr) patientList.push(*itr);
}
