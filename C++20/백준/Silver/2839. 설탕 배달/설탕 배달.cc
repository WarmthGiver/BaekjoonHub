#include <iostream>

int main()
{
	int N, bagCount, temp;

	std::cin >> N;

	for (bagCount = N / 5; bagCount >= 0; --bagCount)
	{
		temp = N - bagCount * 5;

		if (temp % 3 == 0)
		{
			std::cout << bagCount + temp / 3;

			return 0;
		}
	}

	std::cout << -1;
}