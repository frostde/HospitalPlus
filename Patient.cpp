#include "frost_applicationfour.h"
#include <cstring>
#include <qwidget.h>

using namespace std;

Patient::Patient(QString fn, QString mn, QString ln, QString s, std::vector<QString> a, QString d,
	int t, int p) : first(fn), middle(mn), last(ln), suffix(s), ailments(a), doctor(d), treated(t), priority(p) {

}

Patient::Patient(const Patient& p) {
	first = p.first;
	middle = p.middle;
	last = p.last;
	suffix = p.suffix;
	ailments = p.ailments;
	doctor = p.doctor;
	treated = p.treated;
	priority = p.priority;
}

QString Patient::getFirstName() const {
	return first;
}

QString Patient::getLastName() const {
	return last;
}

QString Patient::getMiddleName() const {
	return middle;
}

bool Patient::operator<(const Patient *rhs) const {
	return this->getPriority() < rhs->getPriority();
}

int Patient::getPriority() const {
	return priority;
}

Patient Patient::operator=(const Patient& p) {
	if (this != &p) {
		first = p.first;
		middle = p.middle;
		last = p.last;
		suffix = p.suffix;
		ailments = p.ailments;
		doctor = p.doctor;
		treated = p.treated;
		priority = p.priority;
	}
	return *this;
}

void Patient::setTreated() {
	treated = 1;
}

QString Patient::getSuffix() const {
	return suffix;
}

QString Patient::getDoctor() const {
	return doctor;
}

QString Patient::getAilments() const {
	QString ailment = " ";
	for (int i = 0; i < ailments.size(); i++)
		ailment += ailments[i];
	return ailment;
}

int Patient::getTreated() const {
	return treated;
}



QString Patient::print() const {
	QString a;
	if (getTreated() == 0)  a = "No";
	else a = "Yes";
	QString b = QString::number(getPriority());
	QString returnString = "";
	returnString += "First Name:" + getFirstName() + "\n" + "Middle Name: " + getMiddleName() + "\n"
		+ "Last Name: " + getLastName() + "\n" + "Suffix: " + getSuffix() + "\n"
		+ "Presiding Doctor: " + getDoctor() + "\n";
	for (int i = 0; i < ailments.size(); ++i) {
		returnString += "Ailment: " + ailments[i] + "\n";
	}
	returnString += "Treated?: " + a + "\n" + "Priority Level: " + b + "\n";
	return returnString;

}

