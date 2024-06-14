#include <iostream>

#include <bitset>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	const int N_MAX(246913);

	bitset<N_MAX> eratostheness_sieve;

	eratostheness_sieve.set(1);

	for (int i = 2; i * i <= N_MAX; ++i)
	{
		if (eratostheness_sieve.test(i))
		{
			continue;
		}

		for (int j = i * i; j <= N_MAX; j += i)
		{
			eratostheness_sieve.set(j);
		}
	}

	for (int N; cin >> N, N;)
	{
		int count{};

		for (int i = N * 2; i > N; --i)
		{
			if (!eratostheness_sieve.test(i))
			{
				++count;
			}
		}

		cout << count << '\n';
	}
}