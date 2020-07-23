#include "paramchecker.h"
#include <gtest/gtest.h>
#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;
 

TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, Pt.IsVitalsOk(dBVector));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, Pt1.IsVitalsOk(dBVector1));
}




int main(int argc, char **argv) {

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


	Patientreport Pt;
	Patientreport Pt1;

        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
