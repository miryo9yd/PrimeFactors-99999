#include "pch.h"
#include "../primefactors/prime-factors.cpp"

#include <vector>
#include "test.h"
using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

