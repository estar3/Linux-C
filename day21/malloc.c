#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* p = NULL;
    //在堆区中分配8个字节
    p = (int *)malloc(8);
    if(NULL == p){
        printf("memory allocation failed \n");
        return -1;
    }
    printf("分配内存成功,首地址为:%p\n", p);
    //对内存进行处理
    *(p + 0) = 100;
    *(p + 1) = 200;
    printf("%d, %d\n", p[0], p[1]);
    printf("%d, %d\n", *(p + 0), *(p + 1));
    
    //不再使用分配的内存空间的时候,将这块内存空间释放
    free(p);//释放在堆区中所分配的内存
    //释放内存后,需要讲指针p设置位空指针,避免野指针的出现 
    p = NULL;
    return 0;
}

