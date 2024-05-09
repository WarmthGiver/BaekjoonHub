#include <iostream>

#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	set<string> dancers = { "ChongChong" };

	int n;

	for (cin >> n; n--;)
	{
		string a, b;

		cin >> a >> b;

		if (dancers.find(a) != dancers.end())
		{
			dancers.insert(b);
		}

		else if (dancers.find(b) != dancers.end())
		{
			dancers.insert(a);
		}
	}

	cout << dancers.size();
}