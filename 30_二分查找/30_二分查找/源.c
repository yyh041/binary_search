#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "search.h"

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int goal = 1;
	int rtn = Search(arr, goal, sz);
	
	if (rtn == -1)
	{
		printf("对不起，做不到");
	}
	else
	{
		printf("你找的在数组中下标为：%d", rtn);
	}

	return 0;
}