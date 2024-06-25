#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct jisin{
    double yaer,month,day,ido,keido,sindo;
}jisin;

void printstr(jisin i){
    printf("%.0lf %.0lf %.0lf %.2lf %.2lf %.0lf\n",i.yaer, i.month, i.day, i.ido, i.keido, i.sindo);
}

int main(void){
    char line[] = "2011,1,1,41.085667,141.266667,1\n";
    char *str;
    jisin j1;

    str = strtok(line,",\n");
    j1.yaer = atof(str);
    str = strtok(NULL,",\n");
    j1.month = atof(str);
    str = strtok(NULL,",\n");
    j1.day = atof(str);
    str = strtok(NULL,",\n");
    j1.ido = atof(str);
    str = strtok(NULL,",\n");
    j1.keido = atof(str);
    str = strtok(NULL,",\n");
    j1.sindo = atof(str);

    printstr(j1);

    return 0;
}