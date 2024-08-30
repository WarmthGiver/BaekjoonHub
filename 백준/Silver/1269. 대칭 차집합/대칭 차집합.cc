#include <algorithm>

#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	cin.tie(nullptr);

	cout.tie(nullptr);

	int ACount, BCount, differenceCount, i, n;

	cin >> ACount >> BCount;

	differenceCount = ACount + BCount;

	int A[ACount];

	for (i = ACount; i--;)
	{
		cin >> A[i];
	}

	sort(A, A + ACount);

	while (BCount--)
	{
		cin >> n;

		if (binary_search(A, A + ACount, n))
		{
			differenceCount -= 2;
		}
	}

	cout << differenceCount;
}