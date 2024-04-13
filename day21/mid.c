#include <stdio.h>
#include <stdlib.h>

//声明描述一个点的坐标的结构体
typedef struct {
    int r;
    int c;
}pt;
//声明描述两个点的坐标的结构体
typedef struct {
    pt p1;
    pt p2;
}rect_t;

pt* midpt(const rect_t* p){
    pt* pmid = (pt *)malloc(sizeof(pt));
    if(pmid){
        pmid->r = (p->p1.r + p->p2.r) / 2;//中心点的横坐标
        pmid->c = (p->p1.c + p->p2.c) / 2;//中心点的纵坐标
    }
    return pmid;
}

int main(void){
    rect_t r = {0};//定义了结构体变量,具有了两个点
    printf("请输入两个点的坐标:");
    scanf("%d%d%d%d", &(r.p1.r), &(r.p1.c), &(r.p2.r), &(r.p2.c));
    pt* p_mid = midpt(&r);
    if(p_mid){
        printf("中心点的位置是(%d,%d)\n", p_mid->r, p_mid->c);
        free(p_mid);
        p_mid = NULL;
    }
    return 0;
}

