#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int N;

	cin >> N;

	N = 1 + pow(2, N);

	cout << N * N;
}