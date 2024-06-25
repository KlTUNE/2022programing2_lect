#include <stdio.h>

void rrotate(unsigned int x, int n){
    int temp;

    for (int i=n-1;i>=0;i--){
        temp = (x>>i)&1;
        printf ("%d",temp);
    }

    for (int i=8-1;i>=n;i--){
        temp = (x>>i)&1;
        printf ("%d",temp);
    }
}

void lrotate(unsigned int x, int n){
    int temp;

    for (int i=7-n;i>=0;i--){
        temp = (x>>i)&1;
        printf ("%d",temp);
    }

    for (int i=7;i>=8-n;i--){
        temp = (x>>i)&1;
        printf ("%d",temp);
    }
}

int main (void){
    int num, n;

    printf("n?");scanf("%d",&n);
    printf("num?(0-255):");scanf("%d",&num);

    rrotate(num, n);
    printf("\n");

    lrotate(num, n);
    printf("\n");

    return 0;
}