#include <stdio.h>

int main(void)
{
	char a = 0x5a;//0101 1010
	char b = a << 2;// a左移两位,b = 0110 1000,a的值不会发生变化，只有赋值运算符和自增运算符能改变值
	short c = a << 2;// a左移两位
	printf("a = %#x, b = %#x, c = %#x\n", a, b, c);
	
	b = a >> 2; // 0101 1010 >> 2 == 0001 0110:0x16
	printf("a = %#x, b = %#x\n", a, b);

	//a此时的符号位为1，右移使用1填充
	a = 0xa5; //1010 0101
	b = a >> 2; //1010 0101 >> 2 == 1110 1001：0xe9
	printf("a = %#x, b = %#x\n", a, b);
	printf("a = %#hhx, b = %#hhx\n", a, b);

	return 0;
}
