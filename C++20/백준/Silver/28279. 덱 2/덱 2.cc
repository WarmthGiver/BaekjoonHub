#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int N, datas[2000000], size{ 0 }, front{ 1000000 }, back{ 999999 };

	cin >> N;

	char command;

	while (N--)
	{
		cin >> command;

		switch (command)
		{
		case '1':

			++size;

			cin >> datas[--front];

			break;

		case '2':

			++size;

			cin >> datas[++back];

			break;

		case '3':

			if (size)
			{
				--size;

				cout << datas[front++] << '\n';
			}

			else
			{
				cout << -1 << '\n';
			}

			break;

		case '4':

			if (size)
			{
				--size;

				cout << datas[back--] << '\n';
			}

			else
			{
				cout << -1 << '\n';
			}

			break;

		case '5':

			cout << size << '\n';

			break;

		case '6':

			cout << !size << '\n';

			break;

		case '7':

			cout << (size ? datas[front] : -1) << '\n';

			break;

		case '8':

			cout << (size ? datas[back] : -1) << '\n';

			break;
		}
	}
}