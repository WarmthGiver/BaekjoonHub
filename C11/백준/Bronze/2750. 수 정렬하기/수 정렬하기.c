#include <stdio.h>

int datas[1001];

int top = 0;

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = n; i--;)
	{
		int data;

		scanf("%d", &data);

		int j = 0;

		for (; j < top; ++j)
		{
			if (data < datas[j])
			{
				for (int k = top; k > j; --k)
				{
					datas[k] = datas[k - 1];
				}

				break;
			}
		}

		datas[j] = data;

		++top;
	}

	for (int i = 0; i < top; ++i)
	{
		printf("%d\n", datas[i]);
	}
}