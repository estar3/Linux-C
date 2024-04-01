#include <stdio.h>

int main(void){
    ;//空语句 

    /*
    //场景1 - 空死循环
    //想要让程序什么也不做
    printf("1\n");
    for(;;); //执行语句就是空语句, 什么也不做
    printf("2\n");
    */
    //场景2 - 延时等待 - 空循环
    printf("3\n");
    int i = 900000000;
    for(; i >= 0;i--);//一直执行i--, 消耗一点时间
    printf("4\n");

    //场景3 - 简化代码 - 不需要循环语句
    int n = 5;
    int fact;
    //fact = 1 * 5 * 4 * 3 * 2 * 1 = 120 
    for(fact = 1; n; fact = fact * n--);
    printf("fact = %d\n", fact);
    
    int j = 0;
    for(j = 0; j < 5; j++);//不小心加分好, 空循环5次
        printf("j = %d\n", j);//不再输出for循环了
    return 0;
}

