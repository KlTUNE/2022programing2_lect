#include<stdio.h>
#include<stdlib.h>

int main(void){
    char i[128];
    FILE *fp;
    fp=fopen("meibo.txt","r");

    if(fp==NULL){
        printf("Cannot open the file.");
        exit(0);
    }
    else{
        while (fgets(i, 128, fp) != NULL){
		    printf("%s", i);
	    }
        printf("\n");
    }

    fclose(fp);

    return 0;
}