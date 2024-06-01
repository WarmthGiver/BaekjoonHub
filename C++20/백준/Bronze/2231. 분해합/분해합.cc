#include <iostream>

using namespace std;

int main()
{
	int N, ctor{}, digit, sum;

	cin >> N ;

	while (++ctor < N)
	{
		digit = sum = ctor;

		while (digit)
		{
			sum += digit % 10;

			digit /= 10;
		}

		if (sum == N)
		{
			cout << ctor;

			return 0;
		}
	}

	cout << 0;
}