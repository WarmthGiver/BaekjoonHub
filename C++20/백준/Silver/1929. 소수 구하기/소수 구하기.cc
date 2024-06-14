#include <iostream>

#include <bitset>

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	long long int M, N, i, j;

	std::cin >> M >> N;

	std::bitset<1000001> eratostheness_sieve;

	eratostheness_sieve.set(1);

	for (i = 1; i <= N; ++i)
	{
		if (eratostheness_sieve.test(i))
		{
			continue;
		}

		if (i >= M)
		{
			std::cout << i << '\n';
		}

		for (j = i; i * j <= N; ++j)
		{
			eratostheness_sieve.set(i * j);
		}
	}
}