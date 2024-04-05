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
    strncat(str1, "1234", 2);//将字符串1234的前2个字符拼接到str1数组的字符串后面
    //strcpy
    char str2[20] = "abcd";
    strcpy(str2, "123456");//将字符串拷贝到str2数组中
    printf("%s\n", str2);
    char* p3 = "abcd";
    strcpy(str2, p3);
    printf("%s\n", str2);
    strncpy(str2, "123456789", 2);//将字符串123456789的前２个字符拷贝到str2
    printf("%s\n", str2);
    //strcmp
    int ret = 0;
    ret = strcmp("abc", "abc");
    printf("abc : abc = %d\n", ret);
    ret = strcmp("abf", "aef");
    printf("abf : aef = %d\n", ret);
    ret = strcmp("abcdef", "abc");
    printf("abcdef : abc = %d\n", ret);
    char* p4 = "abc";
    char* p5 = "abd";
    ret = strncmp(p4, p5, 2);
    printf("abc : abd (2):%d\n", ret);
    return 0;
}//编辑reverse函数实现字符串的反转:"12345678" -> "87654321"








