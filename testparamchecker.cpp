#include "paramchecker.h"
#include <gtest/gtest.h>
#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;
 
vector<health*> dBVector;
vector<health*> dBVector1;
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, IsVitalsOk(dBVector));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, IsVitalsOk(dBVector1));
}




int main(int argc, char **argv) {

	
	bpm b1(100);
	spo2 sp(90);
	RespRate rp(50);
	dBVector.push_back(&b1);
	dBVector.push_back(&sp);
	dBVector.push_back(&rp);


	bpm b2(200);
	spo2 sp2(90);
	RespRate rp2(50);
	dBVector1.push_back(&b2);
	dBVector1.push_back(&sp2);
	dBVector1.push_back(&rp2);


        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
