#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Search(int arr[], int a,int sz)
{
	int left = 0;
	int right = sz-1;
	

	while (left<=right)//必须去等 否则会漏掉查找到数是同时和right和left相等
	{
		int mid = (left + right) / 2;//不能放在循环外面 不然每次循环mid不变
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