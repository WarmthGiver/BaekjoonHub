#include <iostream>

#include <cmath>

using namespace std;

string N;

int B, i, d;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cin >> N >> B;

	i = N.length() - 1;

	for (auto n : N)
	{
		if (n < 65)
		{
			n -= 48;
		}

		else
		{
			n -= 55;
		}

		d += n * pow(B, i--);
	}

	cout << d;
}