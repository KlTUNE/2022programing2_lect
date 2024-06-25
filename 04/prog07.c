#include <stdio.h>

void ten5(int a[]){
    for (int i=0;i<5;i++){
        a[i] = a[i]*10;
    }
}

void ten4(int a[]){
    for (int i=0;i<4;i++){
        a[i] = a[i]*10;
    }
}

int main (void){
    int a[5] = {10,20,30,40,50};
    int b[4] = {3,4,5,6};

    ten5(a);
    ten4(b);

    printf ("%d, %d, %d, %d, %d\n",a[0],a[1],a[2],a[3],a[4]);
    printf ("%d, %d, %d, %d\n",b[0],b[1],b[2],b[3]);

    return 0;
}