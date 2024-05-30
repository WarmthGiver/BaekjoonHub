#include<iostream>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	int a, b, c;

	while (cin >> a >> b >> c, a && b && c)
	{
		if (a >= b + c || b >= c + a || c >= a + b)
		{
			cout << "Invalid\n";
		}

		else if (a == b && b == c)
		{
			cout << "Equilateral\n";
		}

		else if (a == b || b == c || c == a)
		{
			cout << "Isosceles\n";
		}

		else
		{
			cout << "Scalene\n";
		}
	}
}