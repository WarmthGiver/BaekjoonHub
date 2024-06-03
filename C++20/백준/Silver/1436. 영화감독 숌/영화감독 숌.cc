#include <iostream>

#include <string>

int main()
{
	int N, titleNumber = 0, titleName = 666;

	std::cin >> N;

	for (;;)
	{
		if (std::to_string(titleName).find("666") != -1)
		{
			if (++titleNumber == N)
			{
				break;
			}
		}

		++titleName;
	}

	std::cout << titleName;
}