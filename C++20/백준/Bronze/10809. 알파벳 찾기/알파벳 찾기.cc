#include <iostream>

using namespace std;

int i, alphabets[26];

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	string S;

	cin >> S;

	i = S.length();

	while (i--)
	{
		alphabets[S[i] - 97] = i + 1;
	}

	while (i++ < 25)
	{
		cout << alphabets[i] - 1 << ' ';
	}
}