#include <stdio.h>

int main(void){
    //实现:0+1+2+...+100
    int m = 0;
    int sum = 0;
    for(m = 0; m <= 100; m++)
        sum += m;
    printf("sum = %d\n", sum);

    //打印星图
    for(int i = 0; i < 10; i++){//循环10次
        //循环语句是一个for循环
        for(int j = 0; j < 20; j++)//每次打印20个*
            printf("*");
        printf("\n");
    }
    return 0;
}

