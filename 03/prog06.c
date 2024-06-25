#include <stdio.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


void sort(int *num1, int *num2){
    if (*num1 > *num2){
        swap(num1,num2);
    }
}


int main(void){
    int num1=10,num2=5,num3=15;
    sort(&num1,&num2);
    sort(&num2,&num3);

    printf("%d, %d, %d\n",num1,num2,num3);

    return 0;
}