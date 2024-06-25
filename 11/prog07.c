#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct iris{
    double sl, sw, pl, pw;
    char class[20];
}iris;

void printIris(iris i){
    printf("%.1lf %.1lf %.1lf %.1lf %s\n",i.sl, i.sw, i.pl, i.pw, i.class);
}

void rand_sort(iris *a, int n){
    int j;
    iris temp;
    srand((unsigned int)time(NULL));

    for (int i=n-1;i>=1;i--){
        j = rand() % i;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main (void){
	FILE *fp;
	char line[256], *str, class[120][20];
    int count = 0, class_count[3] = {0};
    double differ[2] = {0}, per, mat[3][3];
    iris array_all[150];
    iris array_learn[120];
    iris array_test[30];
    iris iris1 = {};

    fp=fopen("Iris.csv","r");

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
        array_all[count] = iris1;
        count ++;
	}

    rand_sort(array_all, count);

    for (int i=0;i<120;i++){
        array_learn[i] = array_all[i];
    }
    for (int i=120;i<150;i++){
        array_test[i-120] = array_all[i];
    }

    for (int i=0;i<30;i++){
        differ[0] = 100;
        for (int j=0;j<120;j++){
            differ[1] = pow(array_test[i].sl-array_learn[j].sl,2);
            differ[1] += pow(array_test[i].sw-array_learn[j].sw,2);
            differ[1] += pow(array_test[i].pl-array_learn[j].pl,2);
            differ[1] += pow(array_test[i].pw-array_learn[j].pw,2);
            if (differ[0] > differ[1]){
                differ[0] = differ[1];
                strcpy(class[i], array_learn[j].class);
            }
        }
    }

    for (int i=0;i<30;i++){
        if (strcmp(array_test[i].class, class[i]) == 0){
            per ++;
        }
    }

    printf ("%lf％\n",per/30*100);

	fclose(fp);
    return 0;
}