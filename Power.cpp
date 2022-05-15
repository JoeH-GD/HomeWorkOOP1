#include "Power.h"

using std::cin;
using std::cout;

void Power::setNumPow(float usNumber, float usPower)
{

		number = usNumber;
		power = usPower;
}

void Power::calculate()
{
	cout << number << " in power of " << power << " is " << pow(number, power);
}
