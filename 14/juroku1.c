#include <stdio.h>

void print16(unsigned int x){
    if(x <= 9){
        printf("%d", x);
        }
    else{
            switch(x){
            case 10: printf("A"); break;
            case 11: printf("B"); break;
            case 12: printf("C"); break;
            case 13: printf("D"); break;
            case 14: printf("E"); break;
            case 15: printf("F"); break;
        }
    }
}

int main(void){
    int num;

    printf("num?(0-255):");scanf("%d",&num);

    print16(num/16);
    print16(num%16);
    printf("\n");

    return 0;
}