#include <iostream>

#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	deque<pair<int, int>> d;

	int n, x;

	cin >> n;

	for (int i = 0; i++ < n;)
	{
		cin >> x;

		d.push_back({ i, x });
	}

	auto p = pair<int, int>(0, 1);

	while (n--)
	{
		x = p.second;

		if (x > 0)
		{
			for (;;)
			{
				p = d.front();

				d.pop_front();

				if (--x)
					
					d.push_back(p);

				else break;
			}
		}

		else
		{
			for (;;)
			{
				p = d.back();

				d.pop_back();

				if (++x)
					
					d.push_front(p);

				else break;
			}
		}

		cout << p.first << ' ';
	}
}