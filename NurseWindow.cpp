#include "NurseWindow.h"
#include "AddPatientWindow.h"

NurseWindow::NurseWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void NurseWindow::on_AddPatientButton_clicked() {
	AddPatientWindow* pw = new AddPatientWindow();
	pw->show();
	close();
}


void NurseWindow::on_cancelButton_clicked() {
	frost_applicationfour* faf = new frost_applicationfour();
	faf->show();
	close();
}

NurseWindow::~NurseWindow()
{
}
