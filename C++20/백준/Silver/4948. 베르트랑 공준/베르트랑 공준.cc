#include <iostream>

#include <bitset>

using namespace std;

const int N_MAX(123456 * 2 + 1);

bitset<N_MAX> eratostheness_sieve;

int primeNumberCounts[N_MAX];

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	eratostheness_sieve.set(1);

	for (int i = 2; i * i < N_MAX; ++i)
	{
		if (eratostheness_sieve.test(i))
		{
			continue;
		}

		for (int j = i * i; j < N_MAX; j += i)
		{
			eratostheness_sieve.set(j);
		}
	}

	int primeNumberCount(0);

	for (int i = 1; i < N_MAX; ++i)
	{
		if (eratostheness_sieve.test(i) == 0)
		{
			++primeNumberCount;
		}

		primeNumberCounts[i] = primeNumberCount;
	}

	for (int N; cin >> N, N != 0;)
	{
		cout << primeNumberCounts[N * 2] - primeNumberCounts[N] << '\n';
	}
}