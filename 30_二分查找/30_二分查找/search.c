#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Search(int arr[], int a,int sz)
{
	int left = 0;
	int right = sz-1;
	

	while (left<=right)//����ȥ�� �����©�����ҵ�����ͬʱ��right��left���
	{
		int mid = (left + right) / 2;//���ܷ���ѭ������ ��Ȼÿ��ѭ��mid����
		if (a < arr[mid])
		{
			right = mid - 1;
		}
		else if (a > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}