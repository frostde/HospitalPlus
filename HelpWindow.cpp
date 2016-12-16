#include "HelpWindow.h"

HelpWindow::HelpWindow(QWidget *parent)
	: QWidget(parent) {
	ui.setupUi(this);
}

HelpWindow::~HelpWindow() {


}

void HelpWindow::on_cancelbutton_clicked() {
	frost_applicationfour* faf = new frost_applicationfour();
	faf->show();
	close();
}
