#include <iostream>

using namespace std;

int main()
{
	cout.tie(0)->sync_with_stdio(0);

	int A, B, V;

	cin >> A >> B >> V;

	cout << 1 + (V - B - 1) / (A - B);
}