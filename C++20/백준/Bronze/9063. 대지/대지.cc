#include<iostream>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, x, y, xMin, yMin, xMax, yMax;

	cin >> N;

	cin >> xMin >> yMin;

	xMax = xMin;

	yMax = yMin;

	while (--N)
	{
		cin >> x >> y;

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

	cout << (xMax - xMin) * (yMax - yMin);
}