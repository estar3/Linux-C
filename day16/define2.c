//宏函数演示
//gcc -E define2.c -o define2.i
//vim define2.i -> 文件末尾
#include <stdio.h>
#define SQUARE(x)  (x*x) //求平方
#define SQUARE1(x)  ((x)*(x)) //求平方
#define ADD(x,y)   ((x) + (y)) 
#define MAX(x,y)   ((x)>(y) ? (x) : (y))

int main(void){
    printf("%d\n", SQUARE(10));//(10*10)
    printf("%d\n", SQUARE(3+7));//(3+7*3+7)
    printf("%d\n", SQUARE1(10));//
    printf("%d\n", SQUARE1(3+7));//((3+7)*(3+7))
    printf("%d\n", ADD(10,20));
    int a = 10, b = 30;
    printf("%d\n", ADD(a,b));//(a) + (b)
    printf("%d\n", MAX(a,b));//(a)>(b)?(a):(b)
#undef MAX
    //printf("%d\n", MAX(a,b));//(a)>(b)?(a):(b)
    
    int* p = NULL;
    //忘记对ｐ赋值了
    if(p == NULL){
        printf("出现了空指针:");
        printf("%s %s %s %s %d\n", 
                __DATE__, __TIME__, __FILE__, __FUNCTION__, __LINE__);
        return -1;
    }
    return 0;
}

