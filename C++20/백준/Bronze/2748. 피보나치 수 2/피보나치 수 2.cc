#include<iostream>

long long fibonacci(int n)
{
	long long r(0), r_old, r_back(1);

	while (--n >= 0)
	{
		r_old = r;

		r += r_back;

		r_back = r_old;
	}

	return r;
}

int main()
{
	int N;

	std::cin >> N;

	std::cout << fibonacci(N);
}