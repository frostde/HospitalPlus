#include "AdministratorWindow.h"

AdministratorWindow::AdministratorWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

AdministratorWindow::~AdministratorWindow() {
	
}

void AdministratorWindow::on_AddBulkPatientsButton_clicked() {
	AddBulkWindow* abw = new AddBulkWindow();
	abw->show();
	close();

}

void AdministratorWindow::on_CancelButton_clicked() {
	frost_applicationfour* faf = new frost_applicationfour();
	faf->show();
	close();
}
