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
    iris iris1 = {};
    char line[50] = "5.7,2.9,4.2,1.3,Iris-versicolor\n";
    char *str;

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

    printIris(iris1);

    return 0;
}