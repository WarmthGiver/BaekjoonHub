#include <stdio.h>

#include <string.h>

int deque[20001];

int front = 10000;

int back = 9999;

int size = 0;

void PushFront(int data)
{
	++size;

	deque[--front] = data;
}

void PushBack(int data)
{
	++size;

	deque[++back] = data;
}

int PopFront()
{
	if (size)
	{
		--size;

		return deque[front++];
	}

	return -1;
}

int PopBack()
{
	if (size)
	{
		--size;

		return deque[back--];
	}

	return -1;
}

int Front()
{
	if (size)
	{
		return deque[front];
	}

	return -1;
}
	
int Back()
{
	if (size)
	{
		return deque[back];
	}

	return -1;
}

int main()
{
	int n, data;

	scanf("%d", &n);

	char command[11];

	while (n--)
	{
		scanf("%s", command);

		if (!strcmp(command, "push_front"))
		{
			scanf("%d", &data);

			PushFront(data);
		}

		else if (!strcmp(command, "push_back"))
		{
			scanf("%d", &data);

			PushBack(data);
		}

		else if (!strcmp(command, "pop_front"))
		{
			printf("%d\n", PopFront());
		}

		else if (!strcmp(command, "pop_back"))
		{
			printf("%d\n", PopBack());
		}

		else if (!strcmp(command, "size"))
		{
			printf("%d\n", size);
		}

		else if (!strcmp(command, "empty"))
		{
			printf("%d\n", size ? 0 : 1);
		}

		else if (!strcmp(command, "front"))
		{
			printf("%d\n", Front());
		}

		else if (!strcmp(command, "back"))
		{
			printf("%d\n", Back());
		}
	}
}