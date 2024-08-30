#include <iostream>

#include <unordered_set>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, M, intersectionCount(0);

	cin >> N >> M;

	string inputString;

	unordered_set<string> S;

	while (N--)
	{
		cin >> inputString;

		S.insert(inputString);
	}

	while (M--)
	{
		cin >> inputString;

		intersectionCount += S.count(inputString);
	}

	cout << intersectionCount;
}