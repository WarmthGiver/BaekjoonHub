#include <iostream>

int main()
{
	int a, b, c, d, e, f, x, y, by, ey;

	std::cin >> a >> b >> c >> d >> e >> f;

	for (x = -999; x <= 999; ++x)
	{
		by = c - a * x;

		ey = f - d * x;

		for (y = -999; y <= 999; ++y)
		{
			if (b * y == by && e * y == ey)
			{
				std::cout << x << ' ' << y;

				return 0;
			}
		}
	}
}