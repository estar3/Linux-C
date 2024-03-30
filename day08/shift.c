#include <stdio.h>

int main(void)
{
	char c;
	printf("请输入一个整数[-128 ~ 127]");
	scanf("%hhd", &c);
	printf("\n转换为二进制：");
	unsigned int m = 0x80; //1000 0000
	//xxxx xxxx c
	//1000 0000
	//----------&
	//x000 0000
	printf("%c", c & m ? '1' : '0');
	m = m >> 1; //0100 0000
	//xxxx xxxx c
	//0100 0000
	//----------&
	//0x00 0000
	printf("%c", c & m ? '1' : '0');
	m = m >> 1;
	printf("%c", c & m ? '1' : '0');
	m = m >> 1;
	printf("%c", c & m ? '1' : '0');
	m = m >> 1;
	printf("%c", c & m ? '1' : '0');
	m = m >> 1;
	printf("%c", c & m ? '1' : '0');
	m = m >> 1;
	printf("%c", c & m ? '1' : '0');
	m = m >> 1;
	printf("%c", c & m ? '1' : '0');
	printf("\n");

	return 0;
}
