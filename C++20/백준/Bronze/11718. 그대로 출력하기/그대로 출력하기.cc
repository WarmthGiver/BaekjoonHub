#include <iostream>

#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	int N = 100;

	while (N--)
	{
		string S;

		getline(cin, S);

		cout << S << '\n';
	}
}