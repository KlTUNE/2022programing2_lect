#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    fp=fopen("number.txt","a");

    for (int i=100;i<200;i++){
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);

    return 0;
}