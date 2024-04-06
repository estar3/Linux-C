//条件编译指令
#include <stdio.h>

#define A (11) 
#define B (1)
#define E (100)

int main(void){

#if A==1
    printf("1\n");
#endif

#if B==1
    printf("2\n");
#else
    printf("3\n");
#endif

#ifndef C 
    printf("4\n");
#else
    printf("5\n");
#endif

#ifdef D
    printf("6\n");
#elif E==10
    printf("7\n");
#else
    printf("8\n");
#endif

    return 0;
}




