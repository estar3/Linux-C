//数组指针演示
#include <stdio.h>

int main(void){
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    //定义数组指针指向二维数组
    int (*p)[4] = a;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }
    //二维数组转换位一维数组
    //a -> int* -> 数组中每一个元素都是int类型
    int* p2 = (int *)a;//强制讲数组指针类型a转换位普通的int类型指针
    for(int i = 0; i < 12; i++)
        printf("%d ", p2[i]);
    printf("\n");
    //一维数组转换为二维数组
    //一维数组 - 二维数组
    //设置 - 数组arr中的每一个元素都是4个int类型的数组
    int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int (*p3)[4] = (int (*)[4])arr;//arr-数组指针 - 数组中元素位4个int类型的数组
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++)
            printf("%d ", p3[i][j]);
        printf("\n");
    }

    return 0;
}





