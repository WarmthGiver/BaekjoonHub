#include <iostream>

int main()
{
	int N, ctor{}, digit, sum;

	std::cin >> N;

	while (++ctor < N)
	{
		digit = sum = ctor;

		while (digit)
		{
			sum += digit % 10;

			digit /= 10;
		}

		if (sum == N)
		{
			std::cout << ctor;

			return 0;
		}
	}

	std::cout << 0;
}