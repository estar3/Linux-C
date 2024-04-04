#include <stdio.h>

int main(void){
    int a = 0x12345678;
    char* p1 = (char *)&a;//将int类型的指针强制转换为char类型的指针，
                          //然后赋值给p1, p1保存ａ的首地址
    printf("%#x\n", *p1);//0x78
    //*p1 = 0x77;
    p1++;//p1 = p1+1
    printf("%#x\n", *p1);//0x56
    p1++;//p1 = p1+1
    printf("%#x\n", *p1);//0x34
    p1++;//p1 = p1+1
    printf("%#x\n", *p1);//0x12
    printf("-----------------\n");
    //通过类型转换访问其中两字节内存
    short* p2 = (short *)&a;//将int类型的指针强制转换为short类型的指针，
                            //然后赋值给p2, p2保存ａ的首地址
    printf("%#x\n", *p2);//0x5678
    p2++;
    printf("%#x\n", *p2);//0x1234

    int* p3 = &a;
    printf("%#x\n", *p3);

    //获取中间两个字节
    printf("%#x\n", *(short *)((char *)&a + 1));
    return 0;
}

