#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char *ptr = (char *)malloc(10*sizeof(char));
    if (ptr == NULL) {
        printf("No enough memory.\n");
        exit(1);
    }
    strcpy(ptr,"hoge");
    printf ("%s\n",ptr);
    free(ptr);

    return 0;
}