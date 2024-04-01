#include <stdio.h>

int main(void)
{
	printf("请输入学生人数：");
	int count = 0;
	scanf("%d", &count);
	if(count <=0)
		return -1;
	printf("\n");
	printf("请输入学生成绩：");
	double score[count];
	for(int i = 0; i < count; i++)
		scanf("%lf", &score[i]);
	double sum = 0,avg,max = score[0];
	for(int i = 0; i < count; i++)
	{
		sum += score[i];
		if(score[i] > max)
			max = score[i];

	}
	avg = sum / count;
	printf("sum = %lg, avg = %lg, max = %lg\n", sum, avg, max);

	return 0;
}
