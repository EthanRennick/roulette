#include "Outcome.h"

bool Outcome::operator==(const Outcome& rhs) const
{
	if (rhs.odds == Outcome::odds && rhs.name == Outcome::name)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Outcome::operator!=(const Outcome& rhs) const
{
	if (Outcome::name != rhs.name || Outcome::odds != rhs.odds)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

bool Outcome::operator<(const Outcome& rhs) const
{
	return (Outcome::name.compare(rhs.name) < 0);
}

string Outcome::toString() const
{

	//stringe = std::to_string( Outcome::name << Outcome::odds);
	return string(Outcome::name + " (" +std::to_string( Outcome::odds) + ":1)");
}



