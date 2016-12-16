#include "frost_applicationfour.h"
#include <queue>
#include <vector>
#include "Patient.h"
#include "NurseWindow.h"



frost_applicationfour::frost_applicationfour(QWidget *parent)
	: QMainWindow(parent) {
	ui.setupUi(this);
}

void frost_applicationfour::on_NurseButton_clicked() {
	NurseWindow* nw = new NurseWindow();
	nw->show();
	close();
}

void frost_applicationfour::on_DoctorButton_clicked() {
	DoctorWindow* dw = new DoctorWindow();
	dw->show();
	close();
}

void frost_applicationfour::on_AdministratorButton_clicked() {
	AdministratorWindow* aw = new AdministratorWindow();
	aw->show();
	close();

}

void frost_applicationfour::on_HospitalButton_clicked() {
	HospitalWindow* hw = new HospitalWindow();
	hw->show();
	close();

}

void frost_applicationfour::on_HelpButton_clicked() {
	HelpWindow* hw = new HelpWindow();
	hw->show();
	close();
}
