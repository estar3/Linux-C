#include <stdio.h>

//使用typedef给定义函数指针变量数据类型
typedef int (*pfunc_t)(int, int);

int add(int x, int y){
    printf("enter %s\n", __func__);
    return x + y;
}
int sub(int x, int y){
    printf("enter %s\n", __func__);
    return x - y;
}
int mul(int x, int y){
    printf("enter %s\n", __func__);
    return x * y;
}
int div(int x, int y){
    printf("enter %s\n", __func__);
    return x / y;
}
int mod(int x, int y){
    printf("enter %s\n", __func__);
    return x % y;
}

//定义函数指针数组, 数组中的每个元素都是一个函数的地址
pfunc_t a[] = {add, sub, mul, div, mod};
int main(void){
    int len = sizeof(a) / sizeof(a[0]);
    pfunc_t pfunc = NULL;
    int ret = 0;
    
    for(int i = 0; i < len; i++){
        pfunc = a[i];
        ret = pfunc(200, 20);
        printf("ret = %d\n", ret);
    }
    return 0;
}

