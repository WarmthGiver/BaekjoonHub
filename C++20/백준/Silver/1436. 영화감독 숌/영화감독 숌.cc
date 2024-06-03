#include <iostream>

#include <string>

int main()
{
	int N, titleNumber = 1, titleName = 666, temp;

	std::cin >> N;

	while (titleNumber != N)
	{
		temp = ++titleName;

		while (temp >= 666)
		{
			if (temp % 1000 == 666)
			{
				++titleNumber;

				break;
			}

			temp /= 10;
		}
	}

	std::cout << titleName;
}