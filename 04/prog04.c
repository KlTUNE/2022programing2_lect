#include <stdio.h>

int main (void){
    int a[5] = {10,20,30,40,50};
    int *pa = a;

    printf ("%d, %d, %d, %d, %d\n",*pa,*(pa+1),*(pa+2),*(pa+3),*(pa+4));

    printf ("%p, %p, %p, %p, %p\n",&a,&a[1],&a[2],&a[3],&a[4]);

    return 0;
}