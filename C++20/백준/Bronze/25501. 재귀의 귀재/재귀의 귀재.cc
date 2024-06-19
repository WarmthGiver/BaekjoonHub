#include <iostream>

using namespace std;

int main()
{
	int T;

	cin >> T;

	while (--T >= 0)
	{
		string S;

		cin >> S;

		int loopCount = 0;

		for (int i = 0, j = S.length() - 1;; ++i, --j)
		{
			++loopCount;

			if (i >= j)
			{
				cout << 1;

				break;
			}

			if (S[i] != S[j])
			{
				cout << 0;

				break;
			}
		}

		cout << ' ' << loopCount << '\n';
	}
}