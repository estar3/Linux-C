#include <stdio.h>

int main(void){
    int a = 1;
//label就是goto要跳转到的标签位置
label:
    printf("1\n");
    if(a == 1){
        a = 0;
        goto label;//让程序跳转到label位置, 自上而下运行
    }
    printf("2\n");

    printf("3\n");
    goto label2;
    printf("4\n");
    printf("4\n");
    printf("4\n");
    printf("4\n");
    printf("4\n");
    printf("4\n");
    printf("4\n");
label2:
    printf("5\n");
    return 0;
}




