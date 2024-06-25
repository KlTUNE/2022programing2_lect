#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    fp=fopen("number.txt","w");

    for (int i=0;i<100;i++){
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);

    return 0;
}