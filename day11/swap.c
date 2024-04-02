#include <stdio.h>

void swap(int x, int y){//x=a, y=b
    int tmp = x;
    x = y;
    y = tmp;
}


int main(void){
    int a = 10, b = 20;
    printf("a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    /*
    int tmp = a;
    a = b;
    b = tmp;
    printf("a = %d, b = %d\n", a, b);
    */
    return 0;
}

