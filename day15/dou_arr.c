//使用二维数组表示字符串数组
#include <stdio.h>
#include <string.h>

int main(void){
    char str[3][10] = {"beijing", "tianjin", "suzhou"};
    //打印字符串
    for(int i = 0; i < 3; i++){
        printf("%s ", str[i]);
    }
    printf("\n");
    //str[0] = "hebei";//将字符串hebei首地址赋值给str[0], error
    strcpy(str[0], "hebei");//ok
    str[1][0] = 'T';
    //打印字符串
    for(int i = 0; i < 3; i++){
        printf("%s ", str[i]);
    }
    printf("\n");

    return 0;
}

