#include <stdio.h>

int main(void)
{

	printf("请输入一个成绩：\n");
	unsigned int score;
	scanf("%u", &score);
	switch(score / 10 * 10)
	{
		case 100:
			printf("优 A\n");
			break;
		case 90:
			printf("优 A\n");
			break;
		case 80:
			printf("良 B\n");
			break;
		case 70:
			printf("中 C\n");
			break;
		case 60:
			printf("差 D\n");
		default:
			printf("劣 E\n");
			break;
	}

	return 0;
}
