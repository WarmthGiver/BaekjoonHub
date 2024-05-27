#include <iostream>

using namespace std;

int main()
{
	cout.tie(0)->sync_with_stdio(0);

	int A, B, V, day;

	cin >> A >> B >> V;

	day = 1 + (V - A) / (A - B);

	if ((V - A) % (A - B))
	{
		++day;
	}

	cout << day;
}