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

	int A1, B1, A2, B2, A3, B3, gcd;

	cin >> A1 >> B1 >> A2 >> B2;

	A3 = A1 * B2 + A2 * B1;

	B3 = B1 * B2;

	gcd = GCD(A3, B3);

	cout << A3 / gcd << ' ' << B3 / gcd;
}