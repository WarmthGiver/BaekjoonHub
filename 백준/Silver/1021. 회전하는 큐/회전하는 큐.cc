#include <iostream>

#include <deque>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int n, m, count = 0;

	cin >> n >> m;

	deque<int> numbers;

	for (int i = n; i;)
	{
		numbers.push_front(i--);
	}

	while (m--)
	{
		int target;

		cin >> target;

		for (int i = 0;; ++i)
		{
			if (numbers[i] == target)
			{
				if (i < n-- - i)
				{
					for (;;)
					{
						int number = numbers.front();

						numbers.pop_front();

						if (number == target)
						{
							break;
						}

						numbers.push_back(number);

						++count;
					}
				}

				else
				{
					for (;;)
					{
						++count;

						int number = numbers.back();

						numbers.pop_back();

						if (number == target)
						{
							break;
						}

						numbers.push_front(number);
					}
				}

				break;
			}
		}
	}

	cout << count;
}