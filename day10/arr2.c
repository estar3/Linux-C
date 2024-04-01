#include <stdio.h>

int main(void){
    int n = 0;
    printf("请输入数组的长度:");
    scanf("%d", &n);

    int a[n];//定义变长数组
    
    //初始化数组
    for(int i = 0; i < n; i++)
        a[i] = i + 2;

    //打印数组的值
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}



