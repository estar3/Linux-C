#include <stdio.h>

int main(void){
    int i = 0;
    //i=0
    //i<5 y - printf() i=1
    //i<5 y - printf() i=2
    //i<5 y - printf() i=3
    //i<5 y - printf() i=4
    //i<5 y - printf() i=5
    //i<5 no - 循环结束
    while(i < 5){
        printf("i = %d\n", i);
        i++;
    }
    printf("---------------\n");
    i = 0;
    //0<5 -> 1
    //1<5 -> 2
    //2<5 -> 3
    //3<5 -> 4
    //4<5 -> 5
    while(i++ < 5)
        printf("i = %d\n", i);
    printf("---------------\n");
    i = 0;
    //1<5 -> 1
    //2<5 -> 2
    //3<5 -> 3
    //4<5 -> 4
    //
    while(++i < 5)
        printf("i = %d\n", i);

    //实现:0+1+2+...+100
    int m = 0;
    int sum = 0;//将加和的结果放到sum变量中
    while(m++ < 100)
        sum = sum + m;
    printf("sum = %d\n", sum);
    //m = 1 sum = 0 + 1 
    //m = 2 sum = 0 + 1 + 2
    //m = 3 sum = 0 + 1 + 2 + 3 
    //...
    //m = 100 sum = 0 + 1 + 2 + 3 + ... + 100
    return 0;
}




