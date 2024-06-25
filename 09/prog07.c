#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct jisin{
    double yaer,month,day,ido,keido;
    char sindo;
}jisin;

int main(void){
	FILE *fp;
	char line[256], *str;
    int count = 0;
    double all, sd;
    double iti[13][32] = {};
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
        if ((int)array[i].sindo >= 1+48){
            all++;
            iti[(int)array[i].month][(int)array[i].day]++;
        }
    }

    for (int i=1;i<=12;i++){
        for (int j=1;j<=31;j++){
            if (iti[i][j] != 0){
                sd += pow(iti[i][j]-all/365,2);
            }
        }
    }

    printf ("平均:%.1lf\n",all/365);
    printf ("標準偏差:%.1lf\n",sqrt(sd/365));

    fclose(fp);

    return 0;
}