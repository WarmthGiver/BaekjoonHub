#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	int T, A, B, R, LCM;

	for (cin >> T; --T >= 0;)
	{
		cin >> A >> B;

		LCM = A * B;

		for (;;)
		{
			R = A % B;

			if (R == 0)
			{
				LCM /= B;

				break;
			}

			A = B;

			B = R;
		}

		cout << LCM << '\n';
	}
}