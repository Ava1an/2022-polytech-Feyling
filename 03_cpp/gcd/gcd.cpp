#include <iostream>
#include <cassert>

using namespace std;

int gcd(int a, int b)
{
	if (a < 0)
	{
		a *= -1;
	}
	if (b < 0)
	{
		b *= -1;
	}
	while ((a != 0) && (b != 0))
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	if (a != 0)
	{
		cout << a << endl;
		return a;
	}
	else
	{
		cout << b << endl;
		return b;
	}
}

int main() {
	gcd(36, 48);
	assert(gcd(0, 5) == 5);
	assert(gcd(9, 0) == 9);
	assert(gcd(48, 64) == 16);
	assert(gcd(-64, 48) == 16);
	assert(gcd(30, 18) == 6);
	assert(gcd(-30, -18) == 6);
	assert(gcd(270, 192) == 6);

	return 0;
}