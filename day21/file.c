//文件操作的标准C库函数
#include <stdio.h>

int main(void){
    FILE* fp = NULL;
    //fp = fopen("a.txt", "w");//只写方式,存在清空,不存在创建新文件
    fp = fopen("b.txt", "r");//只读方式,存在读取,不存在失败
    if(fp == NULL){
        printf("open failed\n");
        return 0;
    }
    printf("open success\n");

    //关闭文件
    fclose(fp);
    fp = NULL;//好习惯

    return 0;
}

