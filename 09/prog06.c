#include <stdio.h>
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
    int iti,ni,san,yon,nana,A,B,C,D,other;
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
        if ((int)array[i].sindo == 1+48){
            iti++;
        }
        else if ((int)array[i].sindo == 2+48){
            ni++;
        }
        else if ((int)array[i].sindo == 3+48){
            san++;
        }
        else if ((int)array[i].sindo == 4+48){
            yon++;
        }
        else if ((int)array[i].sindo == 7+48){
            nana++;
        }
        else if ((int)array[i].sindo == 65){
            A++;
        }
        else if ((int)array[i].sindo == 66){
            B++;
        }
        else if ((int)array[i].sindo == 67){
            C++;
        }
        else if ((int)array[i].sindo == 68){
            D++;
        }
    }

    printf ("震度1:%d回\n",iti);
    printf ("震度2:%d回\n",ni);
    printf ("震度3:%d回\n",san);
    printf ("震度4:%d回\n",yon);
    printf ("震度5-(A):%d回\n",A);
    printf ("震度5+(B):%d回\n",B);
    printf ("震度6-(C):%d回\n",C);
    printf ("震度6+(D):%d回\n",D);
    printf ("震度7:%d回\n",nana);

    fclose(fp);

    return 0;
}