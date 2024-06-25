#include <stdio.h>
#define BIT 2

void printbin(unsigned int x){
    if(x <= 9){
        printf("%d", x);
    }
}

int main (void){
    int num, num_list[500], count=0;

    printf("num?(0-255):");scanf("%d",&num);
    while (num>BIT-1){
        num_list[count] = num % BIT;
        num /= BIT;
        count ++;
    }
    num_list[count] = num;
    count ++;

    for (int i=8-count;i>0;i--){
        num_list[count] = 0;
        count ++;
    }

    for (int i=count;i>=0;i--){
        printbin(num_list[i]);
    }
    printf("\n");

    return 0;
}