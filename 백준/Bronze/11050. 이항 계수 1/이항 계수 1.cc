#include<iostream>

int binomial_oefficient(int n, int k)
{
	if (k > n - k)
	{
		k = n - k;
	}

	int r(1);

	for (int i(0); i < k; ++i)
	{
		r *= n - i;

		r /= i + 1;
	}

	return r;
}

int main()
{
	int N, K;

	std::cin >> N >> K;

	std::cout << binomial_oefficient(N, K);
}