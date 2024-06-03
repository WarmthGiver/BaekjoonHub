#include <iostream>

int main()
{
	int N, titleNumber(1), titleName(666), t;

	std::cin >> N;

	while (titleNumber != N)
	{
		for (t = ++titleName; t >= 666; t /= 10)
		{
			if (t % 1000 == 666)
			{
				++titleNumber;

				break;
			}
		}
	}

	std::cout << titleName;
}