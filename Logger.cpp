#include <iostream>
#include "Logger.h"


using namespace std;

Logger* Logger::logger = NULL;

Logger* Logger::getLogger() {
	if (logger == NULL)
		logger = new Logger();
	return logger;
}

Logger::Logger() {
}

void Logger::log(string output) {
	ofstream outFile("C:/Users/frost/OneDrive/Documents/Visual Studio 2015/Projects/frost_applicationfour/x64/Debug/Report.txt", ios::app);
	if (!outFile) {
		cerr << "File could not be opened!" << endl;
		exit(1);
	}
	else {
		outFile << output << endl;
	}
}

Logger::Logger(const Logger& l) {
	logger = l.logger;
}

Logger::~Logger() {
	delete logger;
}

void Logger::log(const Patient *p, int c) {
	ofstream outFile("C:/Users/frost/OneDrive/Documents/Visual Studio 2015/Projects/frost_applicationfour/x64/Debug/report.txt", ios::app);
	if (!outFile) {
		cerr << "File could not be opened!" << endl;
		exit(1);
	}
	else {
		if (c == 0) {
			outFile << p->getFirstName().toStdString() << " " << p->getLastName().toStdString() << " has been added to the triage with the priority level: " << p->getPriority() << endl;
		}
		else if (c == 1) {
			outFile << p->getFirstName().toStdString() << " " << p->getLastName().toStdString() << " has been treated." << endl;
		}
		else {
			outFile << p->getFirstName().toStdString() << " " << p->getLastName().toStdString() << " has been added to the list of treated patients." << endl;
		}
	}
}