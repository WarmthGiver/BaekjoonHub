#include <iostream>

using namespace std;

long long GCD(long long a, long long b)
{
	for (int r; r = a % b, r > 0;)
	{
		a = b;

		b = r;
	}

	return b;
}

long long LCM(long long a, long long b)
{
	return a * b / GCD(a, b);
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	long long A, B;

	cin >> A >> B;

	cout << LCM(A, B) << '\n';
}