#include <stdio.h>

int recurrence (int x1, int n){
    return n*2-x1;
}

int main(void){
    int x1 = 1, n = 10;

    printf ("%d\n",recurrence(x1, n));

    return 0;
}