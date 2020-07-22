#include "paramchecker.h"

int health::isParamOk() {
	int return_value = 1;
	if (value < lowerbound || value > upperbound) {
		return_value = 0;
	}
	return (return_value);

}

bool Patientreport::IsVitalsOk() {
	int i;
	int ret = 0;
	bool retval = false;
	for (i = 0; i < TotalReps; i++)
	{
		ret += health_rep[i]->isParamOk();
	}
	if (ret == TotalReps) {
		retval = true;
	}
	return retval;
}

