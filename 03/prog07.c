#include <stdio.h>

int main(void){
    int a;
    int *px = &a;

    printf ("%p\n",&a);
    printf ("%p\n",&px);

    return 0;
}