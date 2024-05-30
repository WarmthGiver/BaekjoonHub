#include<iostream>

int main()
{
	int N, x, y, xMin, yMin, xMax, yMax;

	std::cin >> N;

	std::cin >> x >> y;

	xMax = xMin = x;

	yMax = yMin = y;

	while (--N)
	{
		std::cin >> x >> y;

		if (x < xMin)
		{
			xMin = x;
		}

		else if (x > xMax)
		{
			xMax = x;
		}

		if (y < yMin)
		{
			yMin = y;
		}

		else if (y > yMax)
		{
			yMax = y;
		}
	}

	std::cout << (xMax - xMin) * (yMax - yMin);
}