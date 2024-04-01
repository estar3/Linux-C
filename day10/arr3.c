#include <stdio.h>

int main(void)
{
	printf("请输入10个整数：");
	int arr[10];
	for(int i = 0; i < 10; i++)
		scanf("%d", arr + i);

	int size = sizeof(arr) / sizeof(arr[0]);
	for(int i = size - 1; i > -1; i--)
	       printf("%d ", arr[i]);
	printf("\n");	

	return 0;
}
