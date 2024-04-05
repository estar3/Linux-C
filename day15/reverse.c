//编辑reverse函数实现字符串的反转:"12345678" -> "87654321"
//字符串反转
#include <stdio.h>
#include <string.h>

//pstr="abcd efgh"
//      0123 4567
//      i       8-i-1
//       i     8-i-1
//        i   8-i-1
//         i 8-i-1

void reverse(char* pstr){
    int len = strlen(pstr);//获取有效字符个数
    for(int i = 0; i < len/2; i++){
        char c = pstr[i];
        pstr[i] = pstr[len-i-1];
        pstr[len-i-1] = c;
    }
}

int main(void){
    char str[1024] = {0};
    for(;;){
        gets(str);
        reverse(str);
        puts(str);
    }
    return 0;
}

