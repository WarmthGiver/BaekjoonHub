#include <iostream>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N;

	cin >> N;

	N = 1 + (1 << N);

	cout << N * N;
}