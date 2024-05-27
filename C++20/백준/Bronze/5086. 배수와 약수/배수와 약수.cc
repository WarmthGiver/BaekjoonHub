#include <iostream>

using namespace std;

int main()
{
	cout.tie(0)->sync_with_stdio(0);

	int A, B;

	while (cin >> A >> B, A && B)
	{
		if (!(A % B))
		{
			cout << "multiple\n";
		}

		else if (!(B % A))
		{
			cout << "factor\n";
		}

		else
		{
			cout << "neither\n";
		}
	}
}