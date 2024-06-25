#include <stdio.h>
#include <string.h>

int main(){
    char a[128]="abc";
    char b[128];

    strcpy(b, a);

    printf ("%s\n",b);

    return 0;
}