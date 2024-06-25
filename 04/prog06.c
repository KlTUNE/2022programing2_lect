#include <stdio.h>

void ten(int a[]){
    for (int i=0;i<5;i++){
        a[i] = a[i]*10;
    }
}

int main (void){
    int a[5] = {10,20,30,40,50};

    ten(a);

    printf ("%d, %d, %d, %d, %d\n",a[0],a[1],a[2],a[3],a[4]);

    return 0;
}