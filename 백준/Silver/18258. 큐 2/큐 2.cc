#include <iostream>

using namespace std;

int datas[2000001], f, r;

int Size()
{
	return r - f;
}

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int n;

	for (cin >> n; n--;)
	{
		string c;

		cin >> c;

		switch (c[0])
		{
		case 'p':

			if (c[1] == 'u')
			{
				cin >> datas[r++];
			}

			else if (c[1] == 'o')
			{
				cout << (Size() ? datas[f++] : -1) << '\n';
			}

			break;

		case 's':

			cout << Size() << '\n';

			break;

		case 'e':

			cout << !Size() << '\n';

			break;

		case 'f':

			cout << (Size() ? datas[f] : -1) << '\n';

			break;

		case 'b':

			cout << (Size() ? datas[r - 1] : -1) << '\n';

			break;
		}
	}
}