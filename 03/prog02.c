#include <stdio.h>

int main(){
    int a = 100;
    int *b = &a;
    *b = 200;

    printf ("%d\n",*b);
    return 0;
}