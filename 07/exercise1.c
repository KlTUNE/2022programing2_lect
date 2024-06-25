#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int count, *score;
    float avg, sd;

    printf(":");
    scanf("%d",&count);
    score = (int*)malloc(count*sizeof(int));
    for (int i=0;i<count;i++){
        printf("%d人目:",i+1);
        scanf("%d",&score[i]);
        avg += score[i];
    }
    avg = avg / count;

    for (int i=0;i<count;i++){
        sd += pow(((float)score[i]-avg),2);
    }
    sd = sqrt(sd/count);

    printf("平均点:%.2f 標準偏差:%.2f\n",avg,sd);

    free(score);
    return 0;
}