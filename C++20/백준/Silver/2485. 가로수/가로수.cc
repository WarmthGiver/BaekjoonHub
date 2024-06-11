#include <algorithm>

#include <iostream>

#include <vector>

using namespace std;

int GCD(int a, int b)
{
	for (int r; b != 0;)
	{
		r = a % b;

		a = b;

		b = r;
	}

	return a;
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, gcd, i;

	cin >> N;

	vector<int> treeDistances(N);

	for (i = N; --i >= 0;)
	{
		cin >> treeDistances[i];
	}

	sort(treeDistances.begin(), treeDistances.end());

	i = N - 1;

	gcd = treeDistances[i] - treeDistances[i - 1];

	while (--i > 0)
	{
		gcd = GCD(gcd, treeDistances[i] - treeDistances[i - 1]);
	}

	cout << (treeDistances[N - 1] - treeDistances[0]) / gcd - N + 1;
}