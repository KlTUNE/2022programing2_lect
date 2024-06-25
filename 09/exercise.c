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
	FILE *fp,*f;
	char line[256], *str;
    int count = 0;
    jisin array[10625];
    jisin temp = {};
    jisin j1 = {};
    fp = fopen("h2011_eq.csv","r");
    f = fopen("h2011_eq_ido_sort.csv","a");

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
    fclose(fp);

    for (int i=0;i<count;i++){
        for (int j=i+1;j<count;j++){
            if (array[i].ido > array[j].ido){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i=0;i<count;i++){
        printstr(array[i]);
        fprintf(f,"%.0lf,%.0lf,%.0lf,%lf,%lf,%c\n",array[i].yaer,array[i].month,array[i].day,array[i].ido,array[i].keido,array[i].sindo);
    }
    fclose(f);

    return 0;
}