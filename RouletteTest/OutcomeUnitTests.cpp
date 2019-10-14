#include "pch.h"
#include "../Roulette/Outcome.h"
#include "OutcomeUnitTests.h"

TEST(OutcomeEquality, Equals) {
	Outcome odd("Odd", 1);
	Outcome anotherOdd("Odd", 1);

	ASSERT_EQ(odd, anotherOdd);
	ASSERT_TRUE(odd == anotherOdd);
}

TEST(OutcomeEquality, NotEquals) {
	Outcome odd("Odd", 1);
	Outcome even("Even", 1);

	ASSERT_FALSE(odd == even);
}

TEST(OutcomeString, ToString) {
	Outcome odd("Odd", 5);
	
	ASSERT_EQ("Odd (5:1)", odd.toString());
}