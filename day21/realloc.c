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
    //调用realloc调整内存大小
    p = realloc(p, 16);//在原先malloc分配的8字节内存后面继续额外多分配8字节内存
                        //返回整个内存的首地址给p
    for(int i = 0 ;i < 4; i++)
        p[i] = i + 50;
    for(int i = 0; i < 4; i++)
        printf("%d ", p[i]);
    printf("\n");
    
    //不再使用分配的内存空间的时候,将这块内存空间释放
    free(p);//释放在堆区中所分配的内存
    p = NULL;
    return 0;
}

