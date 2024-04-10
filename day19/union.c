#include <stdio.h>

int main(void){
    union {
        unsigned int u_n;
        unsigned char u_c[4];
    }mb;//直接定义联合体变量mb, 分配4个字节

    mb.u_n = 0x12345678;//向4个字节内存中写入了数据0x12345678
    //0x78   0x56   0x34   0x12     u_n
    //__     __     __     __ 
    //u_c[0] u_c[1] u_c[2] u_c[3]   u_c
    for(int i = 0; i < 4; i++)
        printf("%#x ", mb.u_c[i]);
    printf("\n");
    //0x78   0x56   0x43   0x12     u_n
    //__     __     __     __ 
    //u_c[0] u_c[1] u_c[2] u_c[3]   u_c
    mb.u_c[2] = 0x43;//0x34->0x43
    printf("%#x\n", mb.u_n);//0x12435678

    //使用联合求主机字节序
    mb.u_n = 1;//0x00 00 00 01
    //        __ __ __ __
    //little  01 00 00 00
    //big     00 00 00 01
    if(mb.u_c[0] == 1){
        printf("little\n");
    }else{
        printf("big\n");
    }
    //指针 - 强转获取第一个字节的数据 - 1,little;0,big;
    return 0;
}




