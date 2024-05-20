#include <iostream>

using namespace std;

int N, sum;

int main()
{
	string S;

	cin >> N >> S;

	while (N--)
	{
		sum += S[N] - 48;
	}

	cout << sum;
}