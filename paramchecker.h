
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

class Patientreport {
	health *health_rep[3];
	int TotalReps;
public:
	explicit Patientreport(float *medval)
	{
		TotalReps = 3;
		health_rep[0] = new bpm(medval[0]);
		health_rep[1] = new spo2(medval[1]);
		health_rep[2] = new RespRate(medval[2]);
	}
	bool IsVitalsOk();
};
