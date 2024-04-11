#include <stdio.h>

//传递二级指针
//swap(&pa, &pb);
void swap(char** ps1, char** ps2){//ps1 = &pa, ps2 = &pb;
    //ps1 = &pa - *ps1 = *(&pa) = pa
    //ps2 = &pb - *ps2 = *(&pb) = pb
    //*ps1 == pa - char* 
    //int tmp = pa;//error
    //char** tmp = pa;
    //char* tmp = pa;
    char* tmp = *ps1;//tmp = pa
    *ps1 = *ps2;//pa = pb
    *ps2 = tmp;//pb = tmp = pa
}
int main(void){
    char* pa = "hello";
    char* pb = "world";
    /*
    char* tmp = pa;
    pa = pb;
    pb = tmp;
    */
    swap(&pa, &pb);
    printf("pa = %s, pb = %s\n", pa, pb);

    return 0;
}

