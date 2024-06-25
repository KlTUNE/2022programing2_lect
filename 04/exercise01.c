#include <stdio.h>

void swap (int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sort (int *num1,int *num2){
    if (*num1 > *num2){
        swap(&*num1,&*num2);
    }
}

void bubble (int num[],int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            sort(&num[i],&num[j]);
        }
    }
}

int main (){
    int num[5]={1,3,2,7,4};
    int len = sizeof(num)/4;

    for (int i=0;i<len-1;i++){
        printf ("%d, ",num[i]);
    }
    printf ("%d\n",num[len-1]);

    bubble(num,len);

    for (int i=0;i<len-1;i++){
        printf ("%d, ",num[i]);
    }
    printf ("%d\n",num[len-1]);

    return 0;
}