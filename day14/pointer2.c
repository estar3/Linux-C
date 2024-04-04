#include <stdio.h>

int main(void){
    int a = 0x12345678;
    void* p = (void *)&a;//保存变量a的地址
    //任意１字节
    char* p1 = (char *)p;
    printf("%#x\n", *p1);
    p1++;
    printf("%#x\n", *p1);
    p1++;
    printf("%#x\n", *p1);
    p1++;
    printf("%#x\n", *p1);
    //任意１字节-直接访问
    printf("%#x\n", *(char *)(p+0));
    printf("%#x\n", *(char *)(p+1));
    printf("%#x\n", *(char *)(p+2));
    printf("%#x\n", *(char *)(p+3));
    //任意２字节
    short* p2 = (short *)p;
    printf("%#x\n", *p2);
    p2++;//p2 = p2 + 1 = p2 + 1 * sizeof(short) = p2 + 2 
    printf("%#x\n", *p2);
    printf("%#x\n",*(short *)(p+0));
    printf("%#x\n",*(short *)(p+2));
    //任意４字节
    int* p3 = (int *)p;
    printf("%#x\n", *p3);
    printf("%#x\n", *(int *)p);
    return 0;
}

