#include <stdio.h>

void A(int x){//形参变量x - 局部变量 
                //使用范围:函数内部, 出了函数就无法使用了
                //
    printf("x = %d\n", x);
    //printf("A:a = %d\n", a);//error
}
int main(void){
    //printf("main : a = %d\n", a);//error 
    int a = 520;//定义初始化局部变量
                //使用范围:从定义的地方开始依次向下直到函数结束,所有代码都可以访问
                //生命周期:从定义的地方开始操作系统为其分配内存
                //         到函数的结束, 操作系统将其内存回收
    printf("main : a = %d\n", a);//ok 
    if(a == 520){
        int b = 1024;//定义初始化局部变量 - 块级变量 
                     //使用范围:从定义的地方开始到花括号结束
                     //生命周期:从定义的地方开始操作系统为其分配内存
                     //到花括号结束, 操作系统回收其内存
        printf("b = %d\n", b);
    }
    //printf("b = %d\n", b);
    return 0;
}






