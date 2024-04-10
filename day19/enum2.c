#include <stdio.h>

enum RETURN {OK, FAILED};//0 1
typedef enum RETURN return_t;
//int check(int a){
return_t check(int a){
    if(a != 0){
        printf("success\n");
        //return 0;
        return OK;
    }else{
        printf("failed\n");
        //return 1;
        return FAILED;
    }
}

int main(void){
    printf("%d\n", check(0));
    printf("%d\n", check(100));
    return 0;
}

