#include "pch.h"
#include "../primefactors/prime-factors.cpp"

#include <vector>
#include "test.h"
using namespace std;

class PrimeFixture : public testing::Test {
public : 
	PrimeFactor prime_factor; 
	vector<int> expected; 
};

TEST_F(PrimeFixture, Of1) {
	
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

