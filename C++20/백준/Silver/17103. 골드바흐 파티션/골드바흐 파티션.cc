#include <iostream>

#include <bitset>

using namespace std;

const int n_max(1000001);

bitset<n_max> eratostheness_sieve;

int prime_numbers[78498];

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	eratostheness_sieve.set(1);

	for (long long i(2), j(0); i < n_max; ++i)
	{
		if (eratostheness_sieve.test(i))
		{
			continue;
		}

		prime_numbers[j++] = i;

		for (long long k(i * i); k < n_max; k += i)
		{
			eratostheness_sieve.set(k);
		}
	}

	int T;

	cin >> T;

	for (int i = T; i > 0; --i)
	{
		int N, partitionCount(0);

		cin >> N;

		for (int j(0); prime_numbers[j] * 2 <= N; ++j)
		{
			if (!eratostheness_sieve.test(N - prime_numbers[j]))
			{
				++partitionCount;
			}
		}

		cout << partitionCount << '\n';
	}
}