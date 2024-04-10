#include <stdio.h>
//声明结构体数据类型
typedef struct person{
    char name[32];
    char sex;//'m' 'f'
    char job;//'s' 't'
    union{
        int class;//班级
        char position[10];//位置/职称 讲师 教授
    }category;
}per_t;

int main(void){
    per_t p[2] = {
        {.name = "小明", .sex = 'm', .job = 's', .category.class = 2208},
        {.name = "老张", .sex = 'f', .job = 't', .category.position = "教授"}
    };
    for(int i = 0; i < 2; i++){
        if(p[i].job == 's'){
            printf("姓名:%s, 性别:%c, 班级:%d\n", 
                    p[i].name, p[i].sex, p[i].category.class);
        }else{
            printf("姓名:%s, 性别:%c, 职称:%s\n",
                    p[i].name, p[i].sex, p[i].category.position);
        }
    }
    return 0;
}

