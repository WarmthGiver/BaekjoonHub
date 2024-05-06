#include <iostream>

using namespace std;

int numberCounts[11] = { 0 };

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int n;

	cin >> n;

	while (n)
	{
		int index = n % 10;

		n *= 0.1;

		++numberCounts[index];
	}

	for (int i = 9; i >= 0; --i)
	{
		for (int j = numberCounts[i]; j > 0; --j)
		{
			cout << i;
		}
	}
}