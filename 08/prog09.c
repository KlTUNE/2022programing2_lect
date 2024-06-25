#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct iris{
    double sl, sw, pl, pw;
    char class[20];
}iris;

int main (void){
	FILE *fp;
	char line[256], *str, differ1c[20], differ2c[20], differ3c[20];
    int count = 0;
    double differ1[2], differ2[2], differ3[2], asl, asw, apl, apw;
    iris array[150];
    iris iris1 = {5.7,4.0,1.2,0.2};
    iris iris2 = {5.9,2.9,4.2,1.5};
    iris iris3 = {5.6,2.8,4.8,2.0};
    iris iris = {};

    fp=fopen("Iris.txt","r");

	while (fgets(line,256,fp) != NULL){
		// printf("%c", line);
        str = strtok(line,",\n");
        iris.sl = atof(str);
        str = strtok(NULL,",\n");
        iris.sw = atof(str);
        str = strtok(NULL,",\n");
        iris.pl = atof(str);
        str = strtok(NULL,",\n");
        iris.pw = atof(str);
        str = strtok(NULL,",\n");
        strcpy(iris.class,str);
        array[count] = iris;
        count ++;
	}

    differ1[0] = pow(iris1.sl-array[0].sl,2);
    differ1[0] += pow(iris1.sw-array[0].sw,2);
    differ1[0] += pow(iris1.pl-array[0].pl,2);
    differ1[0] += pow(iris1.pw-array[0].pw,2);
    strcpy(differ1c,array[0].class);

    differ2[0] = pow(iris2.sl-array[0].sl,2);
    differ2[0] += pow(iris2.sw-array[0].sw,2);
    differ2[0] += pow(iris2.pl-array[0].pl,2);
    differ2[0] += pow(iris2.pw-array[0].pw,2);
    strcpy(differ2c,array[0].class);

    differ3[0] = pow(iris3.sl-array[0].sl,2);
    differ3[0] += pow(iris3.sw-array[0].sw,2);
    differ3[0] += pow(iris3.pl-array[0].pl,2);
    differ3[0] += pow(iris3.pw-array[0].pw,2);
    strcpy(differ3c,array[0].class);

    for (int i=1;i<150;i++){
        differ1[1] = pow(iris1.sl-array[i].sl,2);
        differ1[1] += pow(iris1.sw-array[i].sw,2);
        differ1[1] += pow(iris1.pl-array[i].pl,2);
        differ1[1] += pow(iris1.pw-array[i].pw,2);

        differ2[1] = pow(iris2.sl-array[i].sl,2);
        differ2[1] += pow(iris2.sw-array[i].sw,2);
        differ2[1] += pow(iris2.pl-array[i].pl,2);
        differ2[1] += pow(iris2.pw-array[i].pw,2);

        differ3[1] = pow(iris3.sl-array[i].sl,2);
        differ3[1] += pow(iris3.sw-array[i].sw,2);
        differ3[1] += pow(iris3.pl-array[i].pl,2);
        differ3[1] += pow(iris3.pw-array[i].pw,2);

        if (differ1[0] > differ1[1]){
            differ1[0] = differ1[1];
            strcpy(differ1c,array[i].class);
        }

        if (differ2[0] > differ2[1]){
            differ2[0] = differ2[1];
            strcpy(differ2c,array[i].class);
        }

        if (differ3[0] > differ3[1]){
            differ3[0] = differ3[1];
            strcpy(differ3c,array[i].class);
        }
    }

    printf("%.1lf %.1lf %.1lf %.1lf %s\n",iris1.sl, iris1.sw, iris1.pl, iris1.pw, differ1c);
    printf("%.1lf %.1lf %.1lf %.1lf %s\n",iris2.sl, iris2.sw, iris2.pl, iris2.pw, differ2c);
    printf("%.1lf %.1lf %.1lf %.1lf %s\n",iris3.sl, iris3.sw, iris3.pl, iris3.pw, differ3c);

	fclose(fp);
    return 0;
}