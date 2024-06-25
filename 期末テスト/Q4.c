#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	int count = 0, min, max;
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
		if (i == 0){
			min = array[0].speed;
			max = array[0].speed;
		}
		if (array[i].speed < min) min=array[i].speed;
		if (array[i].speed > max) max=array[i].speed;
	}
	printf ("speedの最小値:%d\nspeedの最大値:%d\n",min, max);

	for (int i=0;i<count;i++){
		if (i == 0){
			min = array[0].distance;
			max = array[0].distance;
		}
		if (array[i].distance < min) min=array[i].distance;
		if (array[i].distance > max) max=array[i].distance;
	}
	printf ("distanceの最小値:%d\ndistanceの最大値:%d\n",min, max);

    fclose(fp);
	return 0;
}