#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct jisin{
    double yaer,month,day,ido,keido;
    char sindo;
}jisin;

void printstr(jisin i){
    printf("%.0lf %.0lf %.0lf %lf %lf %c\n",i.yaer, i.month, i.day, i.ido, i.keido, i.sindo);
}

int main(void){
	FILE *fp;
	char line[256], *str;
    int count = 0;
    jisin array[10625];
    jisin j1 = {};
    fp = fopen("h2011_eq.csv","r");

    while (fgets(line,256,fp) != NULL){
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
        j1.sindo = *str;
        array[count] = j1;
        count ++;
    }

    for (int i=0;i<count;i++){
        printstr(array[i]);
    }

    fclose(fp);

    return 0;
}