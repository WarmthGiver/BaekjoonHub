#include <iostream>

#include <cmath>

using namespace std;

bool IsPrimeNumber(unsigned n)
{
	if (n <= 1)
	{
		return false;
	}

	if (n <= 3)
	{
		return true;
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return false;
	}
	
	unsigned sqrt_n = sqrt(n);

	for (int i = 5; i <= sqrt_n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int testCaseCount;
	
	unsigned n;

	cin >> testCaseCount;

	while (--testCaseCount >= 0)
	{
		for (cin >> n; !IsPrimeNumber(n); ++n);

		cout << n << '\n';
	}
}