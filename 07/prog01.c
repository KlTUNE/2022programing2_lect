#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p=(int*)malloc(4*sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    for (int i=0;i<4;i++){
        printf ("%d ",p[i]);
    }
    printf ("\n");
    free(p);

    return 0;
}