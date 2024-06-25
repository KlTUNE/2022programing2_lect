#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *ptr = (int *)malloc(10*sizeof(int));
    if (ptr == NULL) {
        printf("No enough memory.\n");
        exit(1);
    }
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    for (int i=0;i<4;i++){
        printf ("%d ",ptr[i]);
    }
    printf ("\n");
    free(ptr);

    return 0;
}