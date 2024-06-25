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
    int count = 0, kaisu = 0, all = 0;
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
    fclose(fp);

    for (double j=0;j<=90;j+=2){
        for (int i=0;i<count;i++){
            if (array[i].ido >= j && array[i].ido < j+2){
                kaisu ++;
                all ++;
            }
        }
        if (kaisu != 0){
            printf ("緯度%.0lf°以上%.0lf°未満:%d回\n",j,j+2,kaisu);
            kaisu = 0;
        }
    }

    // printf ("%d\n",all);

    return 0;
}