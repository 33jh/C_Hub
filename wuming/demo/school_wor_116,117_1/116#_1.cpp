#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//判断是否为奇数
int main()
{
    printf("请输入任意数字：");
    int inPut = 0;
    scanf("%d", &inPut);
    if (inPut % 2 == 0)
    {
        printf("不为奇数");
    }
    else
    {
       printf("为奇数");
    }
    
    return 0;
}