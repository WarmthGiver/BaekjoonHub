#include <iostream>

#include <iomanip>

#include <vector>

using namespace std;

vector<int> fibonacci(short n)
{
	vector<int> current{ 0 }, current_old, increment{ 1 };

	const int carry_max(1000000000);

	while (--n >= 0)
	{
		current_old = current;

		int current_size(current.size()), carry(0);

		for (int i = 0; i < current_size; ++i)
		{
			current[i] += increment[i] + carry;

			carry = current[i] / carry_max;

			current[i] %= carry_max;
		}

		increment = current_old;

		if (carry > 0)
		{
			current.push_back(carry);

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

	vector<int> fibonacci_N = fibonacci(N);

	int i = fibonacci_N.size() - 1;

	cout << fibonacci_N[i];

	while (--i >= 0)
	{
		cout << setfill('0') << setw(9) << fibonacci_N[i];
	}
}