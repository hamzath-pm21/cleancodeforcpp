#include "paramchecker.h"
#include <gtest/gtest.h>
#include <assert.h>
 
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

float patdetails[3] = { 100,90,50 };
float pat2det[3] = { 200,90,50 };
 
int main(int argc, char **argv) {
	bool x;
	Patientreport Pt(&patdetails[0]);
	Patientreport Pt1(&pat2det[0]);

	x = Pt.IsVitalsOk();
	assert(x != false);
	x = Pt1.IsVitalsOk();
	assert(x != true);
 return 0;
}
