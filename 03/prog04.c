#include <stdio.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


int main(void){
    int num1=10,num2=5;
    swap(&num1,&num2);

    printf("%d, %d\n",num1,num2);

    return 0;
}