//ȡ10��������ƽ��ֵ
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)//i�����0��ʼȡ���˴����Ϊ1��ô�������ı�
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