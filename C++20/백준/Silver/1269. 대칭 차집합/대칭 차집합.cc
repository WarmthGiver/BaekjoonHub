#include <algorithm>

#include <iostream>

#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	int ACount, BCount, differenceCount{}, n;

	cin >> ACount >> BCount;

	differenceCount += ACount + BCount;

	unordered_set<int> A(ACount);

	while (ACount--)
	{
		cin >> n;

		A.insert(n);
	}

	while (BCount--)
	{
		cin >> n;

		if (A.count(n))
		{
			differenceCount -= 2;
		}
	}

	cout << differenceCount;
}