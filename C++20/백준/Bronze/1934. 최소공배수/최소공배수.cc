#include <algorithm>

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	int T, A, B, R, gcd;

	for (cin >> T; --T >= 0;)
	{
		cin >> A >> B;

		gcd = A * B;

		for (;;)
		{
			R = A % B;

			if (R == 0)
			{
				break;
			}

			A = B;

			B = R;
		}

		cout << gcd / B << '\n';
	}
}