#pragma once
#include "frost_applicationfour.h"
#include <iostream>
#include <string>
#include <vector>
#include <qstring.h>


class Patient {
private:
	QString first;
	QString middle;
	QString last;
	QString suffix;
	std::vector<QString> ailments;
	QString doctor;
	int treated;
	int priority;

public:
	Patient(QString fn, QString mn, QString ln, QString s, std::vector<QString> a, QString d, int t, int p);
	Patient(const Patient& p);
	QString getSuffix() const;
	QString getDoctor() const;
	QString getAilments() const;
	QString getFirstName() const;
	QString getLastName() const;
	QString getMiddleName() const;
	//int getFirstCharacter() const;
	int getPriority() const;
	void setTreated();
	int getTreated() const;
	bool operator<(const Patient* rhs) const;
	Patient operator=(const Patient& p);
	QString print() const;
	//std::ostream& operator<<(std::ostream& out);
	

};

struct Compare {
	bool operator()(const Patient* a, const Patient* b) {
		return a->getPriority() > b->getPriority();

	}
};

struct CompareByDoctor {
	bool operator()(const Patient* a, const Patient* b) {
		QString doctor1 = a->getDoctor().toUpper();
		QString doctor2 = b->getDoctor().toUpper();
		if (doctor1 == doctor2 || doctor1 < doctor2) {
			return true;
		}
		return false;
	}
};
