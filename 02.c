#define _CRT_SECURE_NO_WARNINGS

#include "02.h"
int main()
{
	int count = 0;
	int i;
	while(I>=Y)
	{
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
	}
	printf("%d-%d��һ����������%d�ĸ�����%d\n",Y,I,X ,count);
	return 0;
}