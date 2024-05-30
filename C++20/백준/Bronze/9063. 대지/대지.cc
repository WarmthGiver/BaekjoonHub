#include<iostream>

int main()
{
	int N, x, y, xMin, yMin, xMax, yMax;

	xMin = yMin = 10000;

	xMax = yMax = -10000;

	std::cin >> N;

	while (N--)
	{
		std::cin >> x >> y;

		if (x < xMin)
		{
			xMin = x;
		}

		if (x > xMax)
		{
			xMax = x;
		}

		if (y < yMin)
		{
			yMin = y;
		}

		if (y > yMax)
		{
			yMax = y;
		}
	}

	std::cout << (xMax - xMin) * (yMax - yMin);
}