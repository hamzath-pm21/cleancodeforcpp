#include "paramchecker.h"

int health::isParamOk() {
	int return_value = 1;
	if (value < lowerbound || value > upperbound) {
		return_value = 0;
	}
	return (return_value);

}

bool IsVitalsOk(vector<health*> &patientmedicalvalues) {
	size_t i;
	int ret = 0;
	bool retval = false;
	for (i = 0; i < patientmedicalvalues.size(); i++)
	{
		ret += patientmedicalvalues[i]->isParamOk();
	}
	if (ret == patientmedicalvalues.size()) {
		retval = true;
	}
	return retval;
}
