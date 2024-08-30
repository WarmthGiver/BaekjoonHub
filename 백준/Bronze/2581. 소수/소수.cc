#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	int M, N, current, sum = 0, min = -1;

	cin >> M >> N;

	if (M < 2)
	{
		M = 2;
	}

	while (M <= N)
	{
		current = sqrt(M);

		while (M % current--);

		if (!current)
		{
			sum += M;

			if (min < 0)
			{
				min = M;
			}
		}

		++M;
	}

	if (sum)
	{
		cout << sum << '\n';
	}

	cout << min;
}