#include <algorithm>

#include <iostream>

#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	int ACount, BCount, differenceCount, n;

	cin >> ACount >> BCount;

	differenceCount = ACount + BCount;

	vector<int> A(ACount);

	while (ACount--)
	{
		cin >> A[ACount];
	}

	sort(A.begin(), A.end());

	while (BCount--)
	{
		cin >> n;

		if (binary_search(A.begin(), A.end(), n))
		{
			differenceCount -= 2;
		}
	}

	cout << differenceCount;
}