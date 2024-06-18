#include <iostream>

#include <vector>

using namespace std;

vector<short> fibonacci(short n)
{
	vector<short> current{ 0 }, current_old, increment{ 1 };

	while (--n >= 0)
	{
		int current_size(current.size());
		
		bool carry(0);

		current_old = current;

		for (int i = 0; i < current_size; ++i)
		{
			current[i] += increment[i] + carry;

			carry = current[i] >= 10;

			current[i] %= 10;
		}

		increment = current_old;

		if (carry)
		{
			current.push_back(1);

			increment.push_back(0);
		}
	}

	return current;
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);

	short N;

	cin >> N;

	vector<short> fibonacci_N = fibonacci(N);

	for (int i = fibonacci_N.size(); --i >= 0;)
	{
		cout << fibonacci_N[i];
	}
}