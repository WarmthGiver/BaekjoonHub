#include <stdio.h>

int a[1001], t, n, o = 1;

int main()
{
	for (scanf("%d", &n); n--;)
	{
		for (scanf("%d", ++t + a); t && a[t] == o; ++o) --t;
	}

	puts(t ? "Sad" : "Nice");
}