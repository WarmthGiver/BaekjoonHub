#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	int N, x, current, count;

	cin >> N;

	count = N;

	while (N--)
	{
		cin >> x;

		if (x == 1)
		{
			--count;

			continue;
		}

		current = sqrt(x);

		while (current > 1)
		{
			if (x % current-- == 0)
			{
				--count;

				break;
			}
		}
	}

	cout << count;
}