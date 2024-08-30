#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	string N;

	int B, i, d = 0;

	cin >> N >> B;

	i = N.length();

	for (char n : N)
	{
		if (n >= 65)
		{
			n -= 55;
		}

		else
		{
			n -= 48;
		}

		d += n * pow(B, --i);
	}

	cout << d;
}