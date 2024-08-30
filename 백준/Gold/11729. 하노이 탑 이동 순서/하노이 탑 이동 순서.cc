#include <iostream>

using namespace std;

void hanoi(int disk_number, int from, int by, int to)
{
	if (disk_number == 1)
	{
		cout << from << ' ' << to << '\n';
	}

	else
	{
		hanoi(disk_number - 1, from, to, by);
		
		cout << from << ' ' << to << '\n';
		
		hanoi(disk_number - 1, by, from, to);
	}
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N;
	
	cin >> N;
	
	cout << (1 << N) - 1 << '\n';
	
	hanoi(N, 1, 2, 3);
}