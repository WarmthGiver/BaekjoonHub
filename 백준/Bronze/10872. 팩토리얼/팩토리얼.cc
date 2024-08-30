#include<iostream>

int main()
{
	int N, N_factorial(1);

	std::cin >> N;

	while (N > 0)
	{
		N_factorial *= N--;
	}

	std::cout << N_factorial;
}