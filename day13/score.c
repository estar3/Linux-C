#include <stdio.h>

//声明input和total_max函数
extern void input(float scores[]/* float* scores */, int sts);
extern float total_max(float* scores, int sts, float* pmax);

int main(void){
    printf("请输入学生人数:");
    int sts;//学生人数
    scanf("%d", &sts);
    float max;
    float scores[sts];//动态数组，保存学生成绩
    input(scores, sts);//调用input函数输入获取学生的成绩保存到scores数组中
    float total = total_max(scores, sts, &max);
    printf("total = %g, 平均分:%g, max = %g\n", total, total / sts, max);
    return 0;
}
//定义input函数
void input(float scores[], int sts){
    for(int i = 0; i < sts; i++){
        printf("请输入第%d个成绩:", i+1);
        scanf("%f", &scores[i]);
    }
}
//定义total_max函数
//pmax = &max
float total_max(float* scores, int sts, float* pmax){
    float total = 0;
    int max = 0;//假设第一个学生成绩最高
    for(int i = 0; i < sts; i++){
        total += scores[i];
        if(scores[i] > scores[max])
            max = i;//记录最高分所在学生下标
    }
    *pmax = scores[max];//最高分
    return total;
}

