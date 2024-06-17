#include<iostream>

long long factorial(int n)
{
	long long n_factorial(1);

	while (n > 0)
	{
		n_factorial *= n--;
	}

	return n_factorial;
}

int main()
{
	int N;

	std::cin >> N;

	std::cout << factorial(N);
}