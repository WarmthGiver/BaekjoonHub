#include <iostream>

using namespace std;

int main()
{
	int T, R, i;

	string S;

	cin >> T;

	while (T--)
	{
		cin >> R >> S;

		for (char c : S)
		{
			for (i = R; i--;)
			{
				cout << c;
			}
		}

		cout << '\n';
	}
}