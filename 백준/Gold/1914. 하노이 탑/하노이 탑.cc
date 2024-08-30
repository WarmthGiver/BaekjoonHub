#include <cmath>

#include <iostream>

#include <string>

using namespace std;

string hanoi(int n)
{
	string r = to_string(pow(2, n));

	r = r.substr(0, r.find('.'));

	r[r.size() - 1] -= 1;

	return r;
}

void hanoi_process(int disk_number, int from, int by, int to)
{
	if (disk_number == 1)
	{
		cout << from << ' ' << to << '\n';
	}

	else
	{
		hanoi_process(disk_number - 1, from, to, by);
		
		cout << from << ' ' << to << '\n';
		
		hanoi_process(disk_number - 1, by, from, to);
	}
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N;
	
	cin >> N;

	cout << hanoi(N) << '\n';
	
	if (N <= 20)
	{
		hanoi_process(N, 1, 2, 3);
	}
}