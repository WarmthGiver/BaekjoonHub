#include <iostream>

#include <deque>

using namespace std;

class AC
{
private:

	deque<int> integers;

	bool isReversed;

public:

	AC()
	{
		Clear();
	}

	void Clear()
	{
		integers.clear();

		isReversed = 0;
	}

	void Input(string command)
	{
		int integer = 0;

		bool isInteger = 0;

		for (auto character : command)
		{
			if (48 <= character && character <= 57)
			{
				isInteger = 1;

				integer *= 10;

				integer += character - 48;
			}

			else if (isInteger)
			{
				isInteger = 0;

				integers.push_back(integer);

				integer = 0;
			}
		}
	}

	bool Function(string p)
	{
		for (auto character : p)
		{
			switch (character)
			{
			case 'R':

				isReversed = !isReversed;

				break;

			case 'D':

				if (integers.size())
				{
					isReversed ? integers.pop_back() : integers.pop_front();

					break;
				}

				return 0;
			}
		}

		return 1;
	}

	int Size()
	{
		return integers.size();
	}

	int Pop()
	{
		int integer;

		if (isReversed)
		{
			integer = integers.back();

			integers.pop_back();
		}

		else
		{
			integer = integers.front();

			integers.pop_front();
		}

		return integer;
	}
};

string p, inputCommand;

int n;

AC ac;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int testCaseCount;

	cin >> testCaseCount;

	while (testCaseCount--)
	{
		cin >> p >> n >> inputCommand;

		ac.Input(inputCommand);

		if (ac.Function(p))
		{
			cout << '[';

			if (ac.Size())
			{
				for (;;)
				{
					cout << ac.Pop();

					if (!ac.Size())
					{
						break;
					}

					cout << ',';
				}
			}

			cout << "]\n";
		}

		else
		{
			cout << "error\n";
		}

		ac.Clear();
	}
}