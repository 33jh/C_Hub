#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	static float line01, line02, line03, s, p;
	while (true)
	{
		printf("\n�������߳���,�ָ�\n");
		scanf("%f,%f,%f", &line01, &line02, &line03);
		if ((line01 + line02 <= line03) || (line01 + line03 <= line02) || (line02 + line03 <= line01)) {
			printf("����֮��δ���ڵ����ߣ�\n");
			continue;
		}
		else
		{
			p = (line01 + line02 + line03) / 2;
			s = sqrt(p * (p - line01) * (p - line02) * (p - line03));
			printf("\n���Ϊ%f", s);
			break;
		}
	}
	return 0;
}