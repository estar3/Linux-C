//arr.c
#include "arr.h"
//定义操作函数
void print(int* parr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", parr[i]);
	printf("\n");
}
