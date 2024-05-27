#include <iostream>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int X, count = 1, i = 1;

	cin >> X;

	while (count < X)
	{
		count += ++i;
	}

	X = count - X;

	if (i & 1)
	{
		cout << 1 + X << '/' << i - X;
	}

	else
	{
		cout << i - X << '/' << 1 + X;
	}
}