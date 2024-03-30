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
	m = 0x40; //0100 0000
	//xxxx xxxx c
	//0100 0000
	//----------&
	//0x00 0000
	printf("%c", c & m ? '1' : '0');
	m = 0x20;
	printf("%c", c & m ? '1' : '0');
	m = 0x10;
	printf("%c", c & m ? '1' : '0');
	m = 0x08;
	printf("%c", c & m ? '1' : '0');
	m = 0x04;
	printf("%c", c & m ? '1' : '0');
	m = 0x02;
	printf("%c", c & m ? '1' : '0');
	m = 0x01;
	printf("%c", c & m ? '1' : '0');
	printf("\n");

	return 0;
}
