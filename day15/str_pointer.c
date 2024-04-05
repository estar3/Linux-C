//使用字符指针数组表示字符串数组
#include <stdio.h>
#include <string.h>

int main(void){
    char* ps[3] = {"beijing", "tianjin", "hainan"};
    for(int i = 0 ; i < 3; i++)
        printf("%s ", ps[i]);
    printf("\n");

    ps[0] = "hebei";//ok,将字符串hebei的首地址赋值给ps[0], ps[0]->"hebei"
    //strcpy(ps[0], "hebei");//no,将字符串hebei拷贝到ps[0]指向的内存,常量区

    for(int i = 0 ; i < 3; i++)
        printf("%s ", ps[i]);
    printf("\n");
    return 0;
}

