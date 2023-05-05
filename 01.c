#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Y_fun(int x)
{
	if (x > 0)
	{
		return -1;
	}
	else if (x < 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int x = 0;
	scanf_s("%d", &x);
	int y = Y_fun(x);
	printf("%d\n", y);
	return 0;
}