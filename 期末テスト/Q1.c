#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
	FILE *fp;
	char line[256];

    fp=fopen("./cars.csv","r");

	while (fgets(line,256,fp) != NULL){
        printf ("%s",line);
	}

	fclose(fp);
    return 0;
}