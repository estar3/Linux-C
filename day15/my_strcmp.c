#include <stdio.h>
#include <string.h>

extern int my_strcmp(const char* src, const char* dst);

int main(int argc, char* argv[])
{
	char src[20] = {0}, dst[20] = {0};
	
	for(;;)
	{
		printf("请输入第一个字符串：");
		gets(src);
	printf("请输入第二个字符串：");
		gets(dst);
		printf("%d\n",my_strcmp(src,dst));
	}
	return 0;
}

int my_strcmp(const char* src, const char* dst)
{
	while(*src)
	{
		if(*src != *dst)
			return *src - *dst;
		src++;
		dst++;
	}
	return *src - *dst;
}
