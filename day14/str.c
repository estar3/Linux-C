#include <stdio.h>

int main(void){
    printf("%s\n", "abcd\0");//打印字符串的占位符%s
    printf("%s\n", "abcd");//打印字符串的占位符%s

    printf("%s\n", "1234\0abcd");//1234
    printf("hello,""world\n");//hello,world\n
                             //数据库 - 语句可以放在多行里
    printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");
    printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
            "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");

    //字符指针
    char* pstr = "abc";
    printf("%s\n", pstr);//打印ｐｓｔｒ指向的字符串
    printf("%c %c %c\n", *(pstr+0), *(pstr+1), *(pstr+2));
    printf("%c %c %c\n", pstr[0],   pstr[1],   pstr[2]);
    printf("%hhd %hhd %hhd\n", pstr[0],   pstr[1],   pstr[2]);
    //pstr[1] = 'B';//error
    //字符数组
    char str1[] = "mnab";
    printf("%s\n", str1);//打印字符串
    str1[0] = 'M';//可以修改
    printf("%s\n", str1);//打印字符串
    printf("%lu\n", sizeof(str1));
    return 0;
}

