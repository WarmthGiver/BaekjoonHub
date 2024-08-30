#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	int T;

	cin >> T;

	string S;

	while (T--)
	{
		cin >> S;

		cout << S[0] << S[S.length() - 1] << '\n';
	}
}