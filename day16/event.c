#include <stdio.h>
#include <string.h>

int main(void){
    printf("=================\n");
    printf("    迷你备忘录\n");
    printf("=================\n");
    char event[31][256];//定义初始化二维数组保存事件信息
    //初始化二维数组
    for(int i = 0; i < 31; i++)
        event[i][0] = '\0';//全部给0
    for(;;){
        printf("备忘信息:");
        int nday = -1;
        scanf("%d", &nday);//输入日期
        if(nday<0 || nday>31){
            printf("无效日期\n");
            continue;
        }
        if(nday == 0)
            break;//结束死循环，结束循环输入
        scanf("%s", event[nday-1]);//输入日期对应的事件信息将其保存到字符数组中
    }
    printf("================\n");
    printf("   备忘信息列表\n");
    printf("================\n");
    for(int i = 0; i < 31; i++){//打印信息列表
        if(strlen(event[i]))//如果有效字符个数非０，输入备忘信息
            printf("%d日:%s\n", i+1, event[i]);
    }
    printf("================\n");
    return 0;
}
//event[2] - 二维数组中某个一位数组名


