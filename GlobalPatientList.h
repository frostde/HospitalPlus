#ifndef GLOBALPATIENTLIST_H
#define GLOBALPATIENTLIST_H
#include "frost_applicationfour.h"

namespace GlobalPatientList {
	extern std::priority_queue<Patient, std::vector<Patient*>, Compare> patientList;
	extern std::vector<Patient*> treatedList;
};

#endif GLOBALPATIENTLIST_H
