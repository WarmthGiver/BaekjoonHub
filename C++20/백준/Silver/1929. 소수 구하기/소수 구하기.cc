#include <iostream>

#include <bitset>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	int M, N, i, j;

	std::cin >> M >> N;

	std::bitset<1000001> eratostheness_sieve;

	eratostheness_sieve.set(1);

	for (i = 1; i * i <= N; ++i)
	{
		if (eratostheness_sieve.test(i))
		{
			continue;
		}

		for (j = i * i; j <= N; j += i)
		{
			eratostheness_sieve.set(j);
		}
	}

	for (i = M; i <= N; ++i)
	{
		if (!eratostheness_sieve.test(i))
		{
			std::cout << i << '\n';
		}
	}
}