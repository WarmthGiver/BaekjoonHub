#include <iostream>

#include <vector>

using namespace std;

vector<int> v;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int n, k, i, j;

	cin >> n >> k;

	for (i = j = n; i;)
	{
		v.push_back(i--);
	}

	cout << '<';

	for (i = j;;)
	{
		j -= k;

		while (j < 0)
		{
			j += i;
		}

		cout << v[j];

		if (!--i) break;

		cout << ", ";

		v.erase(v.begin() + j);
	}

	cout << '>';
}