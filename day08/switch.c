#include <stdio.h>

int main(void){
    printf("请输入衣服的编号:");
    int size;
    scanf("%d", &size);
    
    switch(size){
        case 1:
            printf("L\n");
            break;
        case 2:
            printf("XL\n");
            break;
        case 3:
            printf("XXL\n");
            break;
        case 4:
            printf("XXXL\n");
            break;
        case 5:
            printf("XXXXL\n");
            break;
        default:
            printf("衣服编号不对\n");
            break;
    }
    return 0;
}

