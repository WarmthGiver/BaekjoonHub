#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int n, s = 1;

	cin >> n;

	while (n > s) s += s;

	cout << n + n - s;
}