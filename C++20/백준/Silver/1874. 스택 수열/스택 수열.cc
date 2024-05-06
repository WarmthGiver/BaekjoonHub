#include <iostream>

#include <vector>

using namespace std;

vector<int> stack;

vector<char> logs;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int inputCount, inputNumber, number = 1;

	cin >> inputCount >> inputNumber;

	while (1)
	{
		stack.push_back(number++);

		logs.push_back('+');

		while (1)
		{
			if (stack.back() == inputNumber)
			{
				stack.pop_back();

				logs.push_back('-');

				if (--inputCount)
				{
					cin >> inputNumber;
				}

				else
				{
					for (auto log : logs)
					{
						cout << log << '\n';
					}

					return 0;
				}
			}

			else if (stack.back() > inputNumber)
			{
				cout << "NO";

				return 0;
			}

			else
			{
				break;
			}
		}
	}
}