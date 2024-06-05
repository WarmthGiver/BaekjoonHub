#include <iostream>

using namespace std;

class MyDeque
{
private:

	int datas[2000000];

	int size{ 0 }, front{ 1000000 }, back{ 999999 };

public:

	void PushFront(int data)
	{
		++size;

		datas[--front] = data;
	}

	void PushBack(int data)
	{
		++size;

		datas[++back] = data;
	}

	int PopFront()
	{
		if (size)
		{
			--size;

			return datas[front++];
		}

		return -1;
	}

	int PopBack()
	{
		if (size)
		{
			--size;

			return datas[back--];
		}

		return -1;
	}

	int Size()
	{
		return size;
	}

	bool Empty()
	{
		return !size;
	}

	int Front()
	{
		return size ? datas[front] : -1;
	}

	int Back()
	{
		return size ? datas[back] : -1;
	}
};

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int N, X;

	MyDeque myDeque;

	char command;

	for (cin >> N; N--;)
	{
		cin >> command;

		switch (command)
		{
		case '1':

			cin >> X;

			myDeque.PushFront(X);

			break;

		case '2':

			cin >> X;

			myDeque.PushBack(X);

			break;

		case '3':

			cout << myDeque.PopFront() << '\n';

			break;

		case '4':

			cout << myDeque.PopBack() << '\n';

			break;

		case '5':

			cout << myDeque.Size() << '\n';

			break;

		case '6':

			cout << myDeque.Empty() << '\n';

			break;

		case '7':

			cout << myDeque.Front() << '\n';

			break;

		case '8':

			cout << myDeque.Back() << '\n';

			break;
		}
	}
}