#include "paramchecker.h"
#include <gtest/gtest.h>
#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;
 
/*
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, vitalsAreOk(100, 100, 50));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

*/


int main(int argc, char **argv) {
	bool x;
	vector<health*> dBVector;
	bpm b1(100);
	spo2 sp(90);
	RespRate rp(50);
	dBVector.push_back(&b1);
	dBVector.push_back(&sp);
	dBVector.push_back(&rp);

	vector<health*> dBVector1;
	bpm b2(200);
	spo2 sp2(90);
	RespRate rp2(50);
	dBVector1.push_back(&b2);
	dBVector1.push_back(&sp2);
	dBVector1.push_back(&rp2);


	Patientreport Pt(dBVector);
	Patientreport Pt1(dBVector1);

	x = Pt.IsVitalsOk();
	assert(x != false);
	x = Pt1.IsVitalsOk();
	assert(x != true);

	return 0;
}
