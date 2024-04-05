//终端所输入的任何内容，操作系统都会当做字符串处理
//例如:./hello -> "./hello"
//例如:./hello 100 200 -> "./hello" "100" "200"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    //argc:记录命令行终端输入的命令和参数的个数(操作系统自动赋值)
    //./hello -> argc=1
    //./hello 100 200 -> argc=3
    //argv:记录命令行终端中输入的信息对应的字符串首地址
    //./hello -> argv[0] -> 存储字符串./hello的首地址
    //./hello 100 -> argv[0]存储./hello字符串首地址, argv[1]存储字符串100首地址
    //./hello 100 200 -> argv[0]存储./hello字符串首地址, argv[1]存储字符串100首地址
    //argv[2]存储字符串200首地址
    for(int i = 0; i < argc; i++)
        printf("argc = %d, argv[%d] = %s\n", argc, i, argv[i]);
    //计算两个数字求和的结果
    if(argc != 3){
        printf("用法: %s 数字１　数字２\n", argv[0]);
        printf("举例:%s 100 200\n", argv[0]);
        return -1;
    }
    //atoi - ascii to int
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("sum = %d\n", a+b);
    return 0;
}




