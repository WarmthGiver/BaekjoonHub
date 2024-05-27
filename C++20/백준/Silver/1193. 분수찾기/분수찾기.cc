#include <iostream>

using namespace std;

int X, i;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	cin >> X;

	while (++i < X)
	{
		X -= i;
	}

	if (i & 1)
	{
		cout << 1 + i - X << '/' << X;
	}

	else
	{
		cout << X << '/' << 1 + i - X;
	}
}