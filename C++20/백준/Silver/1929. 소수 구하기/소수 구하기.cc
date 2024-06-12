#include <iostream>

bool is_prime_number(int x)
{
	if (x <= 1)
	{
		return false;
	}

	if (x <= 3)
	{
		return true;
	}

	if (x % 2 == 0 || x % 3 == 0)
	{
		return false;
	}
	
	for (int i = 5; i * i <= x; i += 6)
	{
		if (x % i == 0 || x % (i + 2) == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int M, N, x;

	std::cin >> M >> N;

	for (x = M - 1; ++x <= N;)
	{
		if (is_prime_number(x))
		{
			std::cout << x << '\n';
		}
	}
}