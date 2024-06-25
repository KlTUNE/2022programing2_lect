#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num = 0;
    int count = 0;
    int *list = (int*)malloc(1*sizeof(int));

    do{
        printf(":");
        scanf("%d",&num);

        list[count] = num;
        count += 1;
        list = (int*)realloc(list,(1+count)*sizeof(int));
    }while (num >= 0);

    for (int i=0;i<count;i++){
        printf("%d ",list[i]);
    }
    printf("\n");

    free(list);
    return 0;
}