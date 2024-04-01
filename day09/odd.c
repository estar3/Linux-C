#include <stdio.h>

int main(void)
{
	for(int i = 1; i < 101; i++)
	{
		if(i % 10 == 0)
			printf("\n");
		if(i % 2 == 0)
			continue;
		printf("%d ", i);
	}


	return 0;
}
