#include <algorithm>

#include <iostream>

#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	int N, M;

	cin >> N >> M;

	vector<string> neverHeards(N);

	while (N--)
	{
		cin >> neverHeards[N];
	}

	sort(neverHeards.begin(), neverHeards.end());

	string neverSeen;

	vector<string> neverHeardNeverSeens;

	neverHeardNeverSeens.reserve(M);

	while (M--)
	{
		cin >> neverSeen;

		if (binary_search(neverHeards.begin(), neverHeards.end(), neverSeen))
		{
			neverHeardNeverSeens.push_back(neverSeen);
		}
	}

	sort(neverHeardNeverSeens.begin(), neverHeardNeverSeens.end());

	cout << neverHeardNeverSeens.size() << '\n';

	for (auto neverHeardNeverSeen : neverHeardNeverSeens)
	{
		cout << neverHeardNeverSeen << '\n';
	}
}