#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int panD_W(int x)//�ж�λ��
{
    if (x / 10 <= 100 && x / 10 >= 10)
    {
        return 3;
    }
    else if (x / 10 < 1000 && x / 10 > 100)
    {
        return 4;
    }
    else
    {
        return -1;
    }
}
int panD_S(int x)//�ж�ˮ�ɻ�������
{
    int i = 1;
    int arr[4] = {};
    int arrD[4] = { 1000,100,10,1 };
    while (i < panD_W(x))//���ڷ����λ�ϵ���ֵ�������������arr[]
    {
        if (panD_W(x) == 3)//���ڲ�ͬ������ֱ��ж�3λ����4λ��
        {
            arr[i - 1] = x / arrD[i];
            x = x - x / arrD[i] * arrD[i];
            i++;
        }
        else if (panD_W(x) == 4)
        {
            arr[i - 1] = x / arrD[i - 1];
            x = x - x / arrD[i - 1] * arrD[i - 1];
            i++;
        }
        else //���������λ����λ���ͷ���-1
            return -1;
    }
    int a = 0;
    if (panD_W(x) == 3)
    {
        if (arr[0] * arr[0] + arr[1] * arr[1] + arr[2] * arr[2] == x)
            return 1;
        else
            return 0;
    }
    else if (panD_S(x) == 4)
    {
        if (arr[0] * arr[0] + arr[1] * arr[1] + arr[2] * arr[2] + arr[3] * arr[3] == x)
            return 1;
        else
            return 0;
    }

}


int main()
{
    int i = 100;
    while (i < 10000)
    {
        if (panD_S(i) == 1)
        {
            printf("%d ", i);
        }

        i++;
    }
    printf("\n");
    return 0;
}