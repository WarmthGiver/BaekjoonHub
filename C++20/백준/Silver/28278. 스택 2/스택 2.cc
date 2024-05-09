#include <iostream>

using namespace std;

struct Stack
{
private:

	int stack[1000001];

	int top = -1;

public:

	void Push(int data)
	{
		stack[++top] = data;
	}

	void Pop()
	{
		stack[top--] = 0;
	}

	int Top()
	{
		return stack[top];
	}

	int Size()
	{
		return top + 1;
	}

	bool Empty()
	{
		return top < 0;
	}
};

Stack intStack;

bool PrintTop()
{
	if (intStack.Empty())
	{
		cout << -1 << '\n';

		return false;
	}

	cout << intStack.Top() << '\n';

	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int inputCount;

	cin >> inputCount;

	while (inputCount--)
	{
		int inputCommand;

		cin >> inputCommand;

		switch (inputCommand)
		{
		case 1:
			int inputData;

			cin >> inputData;

			intStack.Push(inputData);

			break;

		case 2:

			if (PrintTop())
			{
				intStack.Pop();
			}

			break;

		case 3:

			cout << intStack.Size() << '\n';

			break;

		case 4:

			cout << (intStack.Empty() ? 1 : 0) << '\n';

			break;

		case 5:

			PrintTop();

			break;
		}
	}
}