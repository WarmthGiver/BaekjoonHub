#include <iostream>

using namespace std;

class Deque
{
private:

	int datas[2000002];
	
	int size = 0, front = 1000001, back = 1000000;

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

	Deque d;

	int n, x;

	char c;

	for (cin >> n; n--;)
	{
		cin >> c;

		switch (c)
		{
		case '1':

			cin >> x;

			d.PushFront(x);

			break;

		case '2':

			cin >> x;

			d.PushBack(x);

			break;

		case '3':

			cout << d.PopFront() << '\n';

			break;

		case '4':

			cout << d.PopBack() << '\n';

			break;

		case '5':

			cout << d.Size() << '\n';

			break;

		case '6':

			cout << d.Empty() << '\n';

			break;

		case '7':

			cout << d.Front() << '\n';

			break;

		case '8':

			cout << d.Back() << '\n';

			break;
		}
	}
}