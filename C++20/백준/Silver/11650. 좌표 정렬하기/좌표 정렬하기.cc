#include <iostream>

using namespace std;

struct Coord
{
	int x, y;

	bool operator<(const Coord& right) const
	{
		if (x == right.x)
		{
			return y < right.y;
		}

		return x < right.x;
	}
};

class MinHeap
{
private:

	Coord datas[100002] = { 0 };

	int size = 0;

public:

	void Push(Coord data)
	{
		int index = ++size;

		while (index > 1)
		{
			int parent = index * 0.5;

			if (data < datas[parent])
			{
				datas[index] = datas[parent];

				index = parent;
			}

			else break;
		}

		datas[index] = data;
	}

	Coord Pop()
	{
		Coord first = datas[1];

		Coord last = datas[size--];

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
		Coord coord;

		cin >> coord.x >> coord.y;

		heap.Push(coord);
	}

	for (int i = 0; i < n; ++i)
	{
		Coord coord = heap.Pop();

		cout << coord.x << ' ' << coord.y << '\n';
	}
}