#include <stdio.h>

int main(void){
    printf("请输入三个数据");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int tmp = a > b ? a : b;
    int max = tmp > c ? tmp : c;
    printf("最大值是%d\n", max);
    return 0;
}

