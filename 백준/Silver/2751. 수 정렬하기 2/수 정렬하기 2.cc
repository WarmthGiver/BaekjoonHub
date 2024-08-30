#include <iostream>

using namespace std;

class MinHeap
{
private:

	int datas[1000002] = { 0 };

	int size = 0;

public:

	void Push(int data)
	{
		int index = ++size;

		while (index > 1)
		{
			int parent = index * 0.5;

			if (datas[parent] > data)
			{
				datas[index] = datas[parent];

				index = parent;
			}

			else break;
		}

		datas[index] = data;
	}

	int Pop()
	{
		int first = datas[1];

		int last = datas[size--];

		int index = 1;

		for (;;)
		{
			int left = index * 2;

			if (left > size) break;

			int right = left + 1;

			int child = left;

			if (right <= size && datas[right] < datas[left])
			{
				child = right;
			}

			if (datas[child] < last)
			{
				datas[index] = datas[child];

				index = child;
			}

			else break;
		}

		datas[index] = last;

		return first;
	}
};

MinHeap heap;

int main()
{
	ios_base::sync_with_stdio(0);

	cin.tie(0);

	cout.tie(0);

	int n;

	cin >> n;

	for (int i = n; i-- > 0;)
	{
		int data;

		cin >> data;

		heap.Push(data);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << heap.Pop() << '\n';
	}
}