#include <stdio.h>

void ten(int a[],int j){
    for (int i=0;i<j;i++){
        a[i] = a[i]*10;
    }
}

int main (void){
    int a[5] = {10,20,30,40,50};
    int b[4] = {3,4,5,6};

    ten(a,sizeof(a)/4);
    ten(b,sizeof(b)/4);

    printf ("%d, %d, %d, %d, %d\n",a[0],a[1],a[2],a[3],a[4]);
    printf ("%d, %d, %d, %d\n",b[0],b[1],b[2],b[3]);

    return 0;
}