#include <iostream>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, B, remain;

	cin >> N >> B;

	string decimal;

	while (N)
	{
		remain = N % B;

		decimal += remain + (remain > 9 ? 55 : 48);

		N /= B;
	}

	reverse(decimal.begin(), decimal.end());

	cout << decimal;
}