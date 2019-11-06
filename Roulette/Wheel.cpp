#include <stdlib.h>
#include <time.h>
#include "Wheel.h"

Wheel::Wheel(bool) :bins(NUMBER_OF_BINS, Bin({}))
{

}

void Wheel::addOutcome(int t_number, Outcome t_outcome)
{
	bins[t_number].insert(t_outcome);
}

Bin Wheel::next()
{
	int rando = 0;
	rando = rand() % 38;
	bins[rando];
	//bins.insert(rando);
	return bins[rando];
}

Bin Wheel::get(int t_number)
{
	bins[t_number];

	return bins[t_number];
}

Bin Wheel::get00()
{
	return Bin({});
}
