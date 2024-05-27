#include <iostream>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int T, C, units[] = { 25, 10, 5, 1 };

	cin >> T;

	while (T--)
	{
		cin >> C;

		for (int unit : units)
		{
			cout << C / unit << ' ';

			C %= unit;
		}

		cout << '\n';
	}
}