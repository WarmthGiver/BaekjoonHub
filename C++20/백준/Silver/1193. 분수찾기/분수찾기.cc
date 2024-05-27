#include <iostream>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int X, i = 1;

	cin >> X;

	while (i < X)
	{
		X -= i++;
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