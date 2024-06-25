#include <stdio.h>
#define BIT 16

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

int main (void){
    int num, num_list[255], count=0;

    printf("num?(0-255):");scanf("%d",&num);
    while (num>BIT-1){
        num_list[count] = num % BIT;
        num /= BIT;
        count ++;
    }
    num_list[count] = num;

    for (int i=count;i>=0;i--){
        print16(num_list[i]);
    }
    printf("\n");

    return 0;
}