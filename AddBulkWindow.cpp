#include "AddBulkWindow.h"
#include <qfile.h>
#include <qtextstream.h>
#include <fstream>

using namespace GlobalPatientList;

AddBulkWindow::AddBulkWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

AddBulkWindow::~AddBulkWindow()
{
}

void AddBulkWindow::on_pushButton_2_clicked() {
	AdministratorWindow* aw = new AdministratorWindow();
	aw->show();
	close();
}

void AddBulkWindow::on_pushButton_clicked() {
	QString firstName; QString middleName; QString lastName; QString suffix;  std::vector<QString> ailments; QString doctor; int treated; int priority; QString ailment; QString tmpVarName; int treat = 0; int priorities = 0; int treatedCount = 0; int counter = 0;
	QString path = qApp->applicationDirPath();
	QFile file("C:/Users/frost/OneDrive/Documents/Visual Studio 2015/Projects/frost_applicationfour/x64/Debug/patients.txt");
	if (!file.open(QIODevice::ReadWrite)) QMessageBox::information(this, tr("Error"), tr("The file could not be opened."));
	else {
		QTextStream in(&file);
		QString line = " ";
		QStringList thisLine;
		if (file.isOpen()) {
			while (!line.isNull()) {
				counter++;
				line = in.readLine();
				thisLine = line.split(":");
				tmpVarName = thisLine[0];
				if (tmpVarName == "firstName") firstName = thisLine[1];
				else if (tmpVarName == "middleName") middleName = thisLine[1];
				else if (tmpVarName == "lastName") lastName = thisLine[1];
				else if (tmpVarName == "suffix") suffix = thisLine[1];
				else if (tmpVarName == "ailment") {
					ailment = thisLine[1];
					ailments.push_back(ailment);
				}
				else if (tmpVarName == "doctor") doctor = thisLine[1];
				else if (tmpVarName == "treated") treated = thisLine[1].toInt();
				else if (tmpVarName == "priority") {
					priority = thisLine[1].toInt();
					Patient* pat = new Patient(firstName, middleName, lastName, suffix, ailments, doctor, treated, priority);
					ui.PatientBrowser->append(pat->print());
					if (treated == 0) {
						patientList.push(pat);
						Logger::log(pat, 0);
					}
					else {
						treatedList.push_back(pat);
						Logger::log(pat, 2);
					}
					ailments.clear();
					line = in.readLine();
					thisLine = line.split(":");
					tmpVarName = "firstName";
				}	
			}
			file.close();
		}
		}
	}

	

