#include <stdio.h>

int main(void){
    printf("请输入一个年份:");
    int year;
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("闰年\n");
    }else{
        printf("平年\n");
    }
    return 0;
}

