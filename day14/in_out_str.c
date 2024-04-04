#include <stdio.h>

int main(void){
    char str[100] = {0};
    //scanf("%s", str);//从键盘读取字符串，存储到字符数组str中
                    //遇到空格结束
    //printf("%s\n", str);

    gets(str);//从键盘读取字符串存储到str数组中
    puts(str);//输出到终端上，自动追加\n

    return 0;
}

