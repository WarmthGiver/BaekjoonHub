#include<iostream>

long long binomial_oefficient(int a, int b)
{
	if (a == b)
	{
		return 1;
	}

	if (a < b)
	{
		int t(a);

		a = b;

		b = t;
	}

	if (b > a - b)
	{
		b = a - b;
	}

	long long r(1);

	for (int i(0); i < b; ++i)
	{
		r *= a - i;

		r /= i + 1;
	}

	return r;
}

int main()
{
	int T;

	std::cin >> T;

	while (--T >= 0)
	{
		int N, M;

		std::cin >> N >> M;

		std::cout << binomial_oefficient(N, M) << '\n';
	}
}