#include <stdio.h>
#include <stdlib.h>

int recurrence (int x1, int x2, int n){
    int *x = (int*)malloc(n*sizeof(int));
    x[0] = x1;
    x[1] = x2;

    printf ("%d\n",x[0]);
    printf ("%d\n",x[1]);

    for (int i=2;i<n;i++){
        x[i] = x[i-1] + x[i-2];
        printf ("%d\n",x[i]);
    }

    free(x);
    return 0;
}

int main(void){
    int x1 = 1, x2 = 1, n = 10;

    recurrence(x1, x2, n);

    return 0;
}