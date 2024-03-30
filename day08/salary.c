#include <stdio.h>

int main(void){
    printf("请输入月薪:");
    double salary;
    scanf("%lg", &salary);

    if(salary < 600){
        printf("找公司仲裁\n");
        return -1;
    }

    if(salary >= 20000)
        printf("飞机\n");
    else if(salary >= 10000)
        printf("高铁\n");
    else if(salary >= 5000)
        printf("高客\n");
    else if(salary >= 3000)
        printf("自行车\n");
    else
        printf("步行\n");


    return 0;
}

