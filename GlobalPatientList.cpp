#include "GlobalPatientList.h"

namespace GlobalPatientList {
	std::priority_queue<Patient, std::vector<Patient*>, Compare> patientList;
	std::vector<Patient*> treatedList;
};


