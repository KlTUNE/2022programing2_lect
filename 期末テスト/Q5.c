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
	int count = 0, differ, esti;
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
		esti = array[i].speed * 2;
		differ = array[i].distance - esti;
		printf ("%d,%d 推定:%d 誤差:%d\n",array[i].speed, array[i].distance, esti, differ);
	}

    fclose(fp);
	return 0;
}