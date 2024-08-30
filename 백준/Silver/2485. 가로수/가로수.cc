#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	for (int r; b != 0;)
	{
		r = a % b;

		a = b;

		b = r;
	}

	return a;
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, first, last, before, gcd, i;

	cin >> N >> first >> last;

	gcd = last - first;

	for (i = N - 2; --i >= 0;)
	{
		before = last;

		cin >> last;

		gcd = GCD(gcd, last - before);
	}

	cout << (last - first) / gcd - N + 1;
}