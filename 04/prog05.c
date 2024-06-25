#include <stdio.h>

int main (void){
    int a[5] = {10,20,30,40,50};
    int *p = a;

    printf ("%d, %d, %d, %d, %d\n",*p+1,*(p+1)+1,*(p+2)+1,*(p+3)+1,*(p+4)+1);

    return 0;
}