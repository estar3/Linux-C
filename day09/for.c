#include <stdio.h>

int main(void){
    //形式1
    int i = 0;
    //i=0
    //i<5 y printf() i=1
    //i<5 y printf() i=2
    //i<5 y printf() i=3
    //i<5 y printf() i=4
    //i<5 y printf() i=5
    //i<5 n 结束
    for(i = 0; i < 5; i++){
        printf("i = %d\n", i);
    }
    printf("------------------\n");
    //形式2
    int j = 0;
    for(; j < 5; j++)
        printf("j = %d\n", j);
    printf("------------------\n");
    //形式3
    int k = 0;
    for(; k < 5; ){
        printf("k = %d\n", k);
        k++;
    }
    printf("------------------\n");
    //形式4:
    /*
    for( ; ; ){//==while(1) 死循环
        printf("hello,world\n");
    }
    */
    int h = 0;
    for(;;){
        printf("h = %d\n", h);
        h++;
        if(h >= 10)
            break;//中断整个循环
    }
    printf("------------------\n");
    //形式5 - 常用
    for(int p = 0; p < 5; p++){//c99标准支持, p只能用于该for循环,出了循环无效
        printf("p = %d\n", p);
    }
    printf("------------------\n");
    //形式6 - continue
    int z = 0;
    for(z = 0; z < 5; z++){
        if(z == 3){
            continue;//中断本次循环,继续下一次循环 
                     //continue后面的代码不再被执行
                     //程序直接去执行表达式3 - z++, 开启下一次的循环
            printf("我会执行吗?\n");
        }
        printf("z = %d\n", z);
    }


    return 0;
}

