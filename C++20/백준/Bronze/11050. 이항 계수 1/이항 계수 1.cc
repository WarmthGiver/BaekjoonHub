#include<iostream>

int factorial(int n)
{
	int n_factorial(1);

	while (n > 0)
	{
		n_factorial *= n--;
	}

	return n_factorial;
}

int binomial_oefficient(int n, int k)
{
	return factorial(n) / (factorial(k) * factorial(n - k));
}

int main()
{
	int N, K;

	std::cin >> N >> K;

	std::cout << binomial_oefficient(N, K);
}