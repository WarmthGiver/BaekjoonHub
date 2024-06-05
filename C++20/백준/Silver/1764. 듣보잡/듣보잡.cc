#include <iostream>

#include <unordered_set>

#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	int N, M;

	cin >> N >> M;

	string inputString;

	unordered_set<string> S(N);

	set<string> deutbojabs;

	while (N--)
	{
		cin >> inputString;

		S.insert(inputString);
	}

	while (M--)
	{
		cin >> inputString;

		if (S.count(inputString))
		{
			deutbojabs.insert(inputString);
		}
	}

	cout << deutbojabs.size() << '\n';

	for (auto deutbojab : deutbojabs)
	{
		cout << deutbojab << '\n';
	}
}