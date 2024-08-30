#include <iostream>

using namespace std;

int stack[100001];

int top = 0;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int count;

	cin >> count;

	while(count--)
	{
		int number;

		cin >> number;

		if (number == 0)
		{
			--top;
		}

		else
		{
			stack[top++] = number;
		}
	}

	int sum = 0;

	while(top--)
	{
		sum += stack[top];
	}

	cout << sum;
}