#include <iostream>

using namespace std;

struct Stack
{
private:

	int stack[10001];

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
		string inputCommand;

		cin >> inputCommand;

		if (inputCommand == "push")
		{
			int inputData;

			cin >> inputData;

			intStack.Push(inputData);
		}

		else if (inputCommand == "pop")
		{
			if (PrintTop())
			{
				intStack.Pop();
			}
		}

		else if (inputCommand == "size")
		{
			cout << intStack.Size() << '\n';
		}

		else if (inputCommand == "empty")
		{
			cout << (intStack.Empty() ? 1 : 0) << '\n';
		}

		else if (inputCommand == "top")
		{
			PrintTop();
		}
	}
}