#include <stdio.h>

int main(void){
    //隐式转换
    //计算过程中:0.9-double, 1-int
    //将int类型的1转换为double类型, 1.0
    //导致三目运算的结果是double类型 - 8
    printf("sizeof(1?1:0.9) = %lu\n", sizeof(1?1:0.9));

    printf("(-7+3)>0 = %d\n", (-7+3)>0);

    //3后面有u - 数据类型 - unsigned int, -7,0 - int
    //gcc会偷偷的将-7转换为无符号类型的数据, unsigned int 
    //-7的无符号类型数据, 正数
    //成立
    printf("(-7+3u)>0 = %d\n", (-7+3u)>0);
    //-7的无符号类型数据是多少?
    //1111 1111 1111 1111 1111 1111 1111 1001
    //无符号类型数据 - 没有符号位 - 二进制的每个1 - 都可以转换为对应的十进制数据
    printf("%u\n", -7);

    //显式转换 
    //强制转换 
    int c = 520;
    long d = (long)c;
    printf("c = %d, d = %ld\n", c, d);

                //1         2         3          4
    int e = 300;//00000000 00000000 00000001 00101100
    char f = (char)e;//只会保留低8位,给f :00101100 
    printf("e = %d, f = %hhd\n", e, f);


    return 0;
}

