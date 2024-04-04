#include <stdio.h>
#include <string.h>//字符串函数头文件

int main(void){
    //strlen- 不包含'\0'字符的有效字符个数
    char* p1 = "abcdefgh";
    char str[100] = "hello";
    printf("%lu, %lu, %lu\n", strlen(p1), strlen(str), strlen("helo"));
    //strcat
    char str1[20] = "abc";
    strcat(str1, "xyz");//将字符串xyz拼接到字符串abc后面,放到str1数组中
    printf("%s\n", str1);
    char* p2 = "mn";
    strcat(str1, p2);
    printf("%s\n", str1);
    return 0;
}

