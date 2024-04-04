#include <stdio.h>

void swap(int x, int y){
    int tmp = x;
    x = y;
    y = tmp;
}

//*pa = *(&a) = a
//*pb = *(&b) = b
void swap_p(int* pa, int* pb){
    int tmp = *pa;//tmp = a = 10;
    *pa = *pb;//a = b = 20;
    *pb = tmp;//b = tmp = 10;
}

int main(void){
    int a = 10, b = 20;
    //swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    swap_p(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

