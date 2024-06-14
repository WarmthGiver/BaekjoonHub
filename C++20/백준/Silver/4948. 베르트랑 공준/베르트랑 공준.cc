#include <iostream>

#include <bitset>

const int n_max(123456 * 2 + 1);

std::bitset<n_max> eratostheness_sieve;

short prime_number_counts[n_max];

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);

	eratostheness_sieve.set(1);

	for (int i = 2; i * i < n_max; ++i)
	{
		if (eratostheness_sieve.test(i))
		{
			continue;
		}

		for (int j = i * i; j < n_max; j += i)
		{
			eratostheness_sieve.set(j);
		}
	}

	int prime_number_count(0);

	for (int i = 1; i < n_max; ++i)
	{
		if (eratostheness_sieve.test(i) == 0)
		{
			++prime_number_count;
		}

		prime_number_counts[i] = prime_number_count;
	}

	for (int n; std::cin >> n, n != 0;)
	{
		std::cout << prime_number_counts[n * 2] - prime_number_counts[n] << '\n';
	}
}