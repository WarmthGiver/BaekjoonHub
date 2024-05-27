#include <iostream>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N, room = 1, count = 1;

	cin >> N;

	while (room < N)
	{
		room += 6 * count;

		++count;
	}

	cout << count;
}