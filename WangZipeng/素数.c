#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int Num = 7;
	int i = 0;
	for (i = 2 ; i < Num ; i++)
	{
		if (Num % i == 0)
		{
			printf("%d��������\n", Num);
			break;
		}
	}
	if (i == Num)
	{
		printf("%d������\n", Num);
	}
	return 0;
}