#include <vector>
using namespace std;

class health {
protected:
	float value;
	float upperbound;
	float lowerbound;
public:
	health() { 
	value = 0;
	upperbound = 0;
	lowerbound = 0;
	}
	int isParamOk();
};

class bpm : public health{
public:
	explicit bpm(float current) {
		value = current;
		upperbound = 150;
		lowerbound = 70;
	}
	
};
class spo2 : public health {
public:
	explicit spo2(float current) {
		value = current;
		upperbound = 100;
		lowerbound = 80;
	}

};

class RespRate : public health {
public:
	explicit RespRate(float current) {
		value = current;
		upperbound = 60;
		lowerbound = 30;
	}

};

bool IsVitalsOk(vector<health*> &patientmedicalvalues);

