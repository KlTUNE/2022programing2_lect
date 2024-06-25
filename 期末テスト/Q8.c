#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct trial{
	int speed;
	int distance;
}Trial;

void dispTrial (Trial t){
	printf ("%d,%d\n",t.speed,t.distance);
}

int main (void){
	FILE *fp;
	char line[256], *str;
	int count = 0, xx = 0, xy = 0, differ, esti;
	double a, MSE = 0;
	Trial array[50];
	Trial trial = {};

    fp=fopen("./cars.csv","r");

	while (fgets(line,256,fp) != NULL){
		str = strtok(line,",\n");
        trial.speed = atof(str);
		str = strtok(NULL,",\n");
        trial.distance = atof(str);
        array[count] = trial;
        count ++;
	}

	for (int i=0;i<count;i++){
		xx += pow(array[i].speed, 2);
		xy += array[i].speed * array[i].distance;
	}

	a = xy / xx;

	for (int i=0;i<count;i++){
		esti = array[i].speed * a;
		differ = array[i].distance - esti;
		MSE += pow(differ, 2)/count;
	}

	printf ("MSE:%lf\n",MSE);

    fclose(fp);
	return 0;
}