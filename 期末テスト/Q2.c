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
	char line[]="10,18\n", *str;
	Trial trial = {};

	str = strtok(line,",\n");
    trial.speed = atof(str);
    str = strtok(NULL,",\n");
    trial.distance = atof(str);

	dispTrial(trial);

    return 0;
}