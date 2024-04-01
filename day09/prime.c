#include <stdio.h>

int main(void)
{
	printf("2 ");
	int tag;
	for(int i = 3; i <= 100; i++)
	{
		tag = 1;
		for(int j = 2; j < i; j++)
		{
			if(i % j == 0)
				tag = 0;
		}
		if(tag)
 			printf("%d ", i);		
	}
	printf("\n");

	return 0;
}
