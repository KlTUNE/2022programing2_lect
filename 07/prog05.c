#include <stdio.h>
#include <stdlib.h>

int main(void){
    int count,*num;

    printf(":");
    scanf("%d",&count);
    num = (int*)malloc(count*sizeof(int));
    for (int i=0;i<count;i++){
        scanf("%d",&num[i]);
    }
    for (int i=count;i>0;i--){
        printf("%d ",num[i-1]);
    }
    printf("\n");
    free(num);

    return 0;
}