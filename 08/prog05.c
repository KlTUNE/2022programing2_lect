#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct iris{
    double sl, sw, pl, pw;
    char class[20];
}iris;

void printIris(iris i){
    printf("%.1lf %.1lf %.1lf %.1lf %s\n",i.sl, i.sw, i.pl, i.pw, i.class);
}

int main (void){
	FILE *fp;
	char line[256], *str;
    int count = 0;
    iris array[150];
    iris iris1 = {};

    fp=fopen("Iris.txt","r");

	while (fgets(line,256,fp) != NULL){
		// printf("%c", line);
        str = strtok(line,",\n");
        iris1.sl = atof(str);
        str = strtok(NULL,",\n");
        iris1.sw = atof(str);
        str = strtok(NULL,",\n");
        iris1.pl = atof(str);
        str = strtok(NULL,",\n");
        iris1.pw = atof(str);
        str = strtok(NULL,",\n");
        strcpy(iris1.class,str);
        array[count] = iris1;
        count ++;
	}

    for (int i=0;i<150;i++){
        printIris(array[i]);
    }

	fclose(fp);
    return 0;
}