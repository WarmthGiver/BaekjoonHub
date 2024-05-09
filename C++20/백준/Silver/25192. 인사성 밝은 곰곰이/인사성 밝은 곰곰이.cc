#include <iostream>

#include <unordered_set>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int n, cnt = 0;

	unordered_set<string> ids;

	for (cin >> n; n--;)
	{
		string id;

		cin >> id;

		if (id == "ENTER")
		{
			cnt += ids.size();

			ids.erase(ids.begin(), ids.end());
		}

		else ids.insert(id);
	}

	cout << cnt + ids.size();
}