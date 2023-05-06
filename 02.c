#define _CRT_SECURE_NO_WARNINGS

#include "02.h"
int main()
{
	int count = 0;
	int i;
	for (i = Y; i <= I; i++)
	{
		int t = i;
		while (t > 0)
		{
			if (t % 10 == X)
			{
				count++;
				break;
			}
			t /= 10;
		}
	}	
	printf("%d-%d中一共包含数字%d的个数是%d\n",Y,I,X ,count);
	return 0;
}
