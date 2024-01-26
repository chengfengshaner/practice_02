//取10个数，求平均值
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)//i必须从0开始取，此处如果为1那么结果将会改变
	{
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	int avg = sum / 10;
	printf("avg = %d", avg);
	return 0;
}