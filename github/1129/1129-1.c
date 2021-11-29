#include <stdio.h>

void swap(char *c1, char *c2)
{
	char tmp;
	tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

void QQ(char a[], int start, int end)
{
	if (start == end)
	{
		for (int j = 0; j < end; j++)
		{
			printf("%c", a[j]);
		}
		printf(" ");
	}
	else
	{
		for (int i = start; i < end; i++)
		{
			swap(&a[i], &a[start]);
			QQ(a, start + 1, end);
			swap(&a[i], &a[start]);
		}
	}
}

int main()
{
	char a[100];
	scanf("%s", a);
	int i = 0;
	for (; i < 100 && a[i] != '\0'; i++)
	{
	}
	QQ(a, 0, i);
}