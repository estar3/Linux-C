#include <stdio.h>

//声明描述一个点的位置结构体
typedef struct{
    int row;
    int col;
}pt;
//声明描述一个圆的结构体
typedef struct{
    pt c;//圆心
    int radius;//半径
}cir_t;
cir_t* bigger(const cir_t* p1, const cir_t* p2){
    return (cir_t *)(p1->radius >= p2->radius ? p1 : p2);
}
int main(void){
    cir_t c1 = {0}, c2 = {0}, *p = NULL;
    printf("请输入一个圆:");
    scanf("%d%d%d", &(c1.c.row), &(c1.c.col), &(c1.radius));
    printf("请输入一个圆:");
    scanf("%d%d%d", &(c2.c.row), &(c2.c.col), &(c2.radius));
    p = bigger(&c1, &c2);
    printf("更大的圆是(%d,%d),%d\n",p->c.row, p->c.col, p->radius);
    return 0;
}

