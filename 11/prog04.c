#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_sort(int *a, int n){
    int j, temp;
    srand((unsigned int)time(NULL));

    for (int i=n-1;i>=1;i--){
        j = rand() % i;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main(void) {
    int n = 10;
    int a[]={1,2,3,4,5,6,7,8,9,10};

    rand_sort(a, n);

    for (int i=0;i<n;i++){
        printf ("%d ",a[i]);
    }
    printf ("\n");

    return 0;
}