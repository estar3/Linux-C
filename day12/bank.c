#include <stdio.h>//standard input output header
#include <stdlib.h>//standard library header, exit

double g_balance = 0;//余额
double g_rate = 0.01;//利率
//定义菜单显示的函数
int menu(void){
    printf("-----------------------\n");
    printf("       mini银行\n");
    printf("-----------------------\n");
    printf("[1]清空账户\n");
    printf("[2]存款\n");
    printf("[3]取款\n");
    printf("[4]查询余额\n");
    printf("[5]利息结算\n");
    printf("[6]调整利率\n");
    printf("[0]退出\n");
    printf("-----------------------\n");
    printf("请选择 :");
    int select = -1;
    scanf("%d", &select);
    return select;
}

//定义查询余额函数
void query(void){
    printf("当前余额:%lg\n", g_balance);
}
//清空账号
void clear(void){
    g_balance = 0;
    query();
}
//存款函数
void save(void){
    printf("存款金额:");
    double Save;
    scanf("%lg", &Save);
    g_balance += Save;
    query();
}
//取款函数
void get(void){
    printf("取款金额:");
    double Get;
    scanf("%lg", &Get);
    if(Get > g_balance)
        printf("余额不足\n");
    else{
        g_balance -= Get;
        query();
    }
}
//利息结算
void settle(void){
    g_balance *= (1 + g_rate);
    query();
}
//利率调整
void adjust(void){
    printf("当前利率:%lg\n", g_rate);
    printf("调整后利率:");
    scanf("%lg", &g_rate);
}
//定义退出程序函数
void quit(void){
    printf("谢谢使用,再见\n");
    exit(0);//标准C库函数, 结束当前程序
}

int main(void){
    for(;;){
        switch(menu()){
            case 1:
                clear();
                break;
            case 2:
                save();
                break;
            case 3:
                get();
                break;
            case 4:
                query();
                break;
            case 5:
                settle();
                break;
            case 6:
                adjust();
                break;
            case 0:
                quit();
                break;
            default:
                printf("选择错误.\n");
        }
    }
    return 0;
}

