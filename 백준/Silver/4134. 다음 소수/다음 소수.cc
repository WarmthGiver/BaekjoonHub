#include <iostream>

bool is_prime_number(unsigned n)
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
	
	for (unsigned i = 5; i * i <= n; i += 6)
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
	std::cin.tie(0)->sync_with_stdio(0);

	int testCaseCount;

	std::cin >> testCaseCount;

	unsigned n;

	while (--testCaseCount >= 0)
	{
		for (std::cin >> n; !is_prime_number(n); ++n);

		std::cout << n << '\n';
	}
}