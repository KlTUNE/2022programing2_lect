#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct iris{
    double sl, sw, pl, pw;
    char class[20];
}iris;

void printIris(iris i){
    printf("%.1lf %.1lf %.1lf %.1lf ",i.sl, i.sw, i.pl, i.pw);
}

int main (void){
	FILE *fp;
	char line[256], *str;
    int count = 0;
    double differ1[3], differ2[3], differ3[3], asl, asw, apl, apw;
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

    for (int i=0;i<50;i++){
        // printIris(array[i]);
        asl += array[i].sl;
    }
    for (int i=0;i<50;i++){
        // printIris(array[i]);
        asw += array[i].sw;
    }
    for (int i=0;i<50;i++){
        // printIris(array[i]);
        apl += array[i].pl;
    }
    for (int i=0;i<50;i++){
        // printIris(array[i]);
        apw += array[i].pw;
    }

    differ1[0] = pow(iris1.sl-asl/50,2);
    differ1[0] += pow(iris1.sw-asw/50,2);
    differ1[0] += pow(iris1.pl-apl/50,2);
    differ1[0] += pow(iris1.pw-apw/50,2);

    differ2[0] = pow(iris2.sl-asl/50,2);
    differ2[0] += pow(iris2.sw-asw/50,2);
    differ2[0] += pow(iris2.pl-apl/50,2);
    differ2[0] += pow(iris2.pw-apw/50,2);

    differ3[0] = pow(iris3.sl-asl/50,2);
    differ3[0] += pow(iris3.sw-asw/50,2);
    differ3[0] += pow(iris3.pl-apl/50,2);
    differ3[0] += pow(iris3.pw-apw/50,2);

    asl = 0;
    asw = 0;
    apl = 0;
    apw = 0;

    for (int i=50;i<100;i++){
        // printIris(array[i]);
        asl += array[i].sl;
    }
    for (int i=50;i<100;i++){
        // printIris(array[i]);
        asw += array[i].sw;
    }
    for (int i=50;i<100;i++){
        // printIris(array[i]);
        apl += array[i].pl;
    }
    for (int i=50;i<100;i++){
        // printIris(array[i]);
        apw += array[i].pw;
    }

    differ1[1] = pow(iris1.sl-asl/50,2);
    differ1[1] += pow(iris1.sw-asw/50,2);
    differ1[1] += pow(iris1.pl-apl/50,2);
    differ1[1] += pow(iris1.pw-apw/50,2);

    differ2[1] = pow(iris2.sl-asl/50,2);
    differ2[1] += pow(iris2.sw-asw/50,2);
    differ2[1] += pow(iris2.pl-apl/50,2);
    differ2[1] += pow(iris2.pw-apw/50,2);

    differ3[1] = pow(iris3.sl-asl/50,2);
    differ3[1] += pow(iris3.sw-asw/50,2);
    differ3[1] += pow(iris3.pl-apl/50,2);
    differ3[1] += pow(iris3.pw-apw/50,2);

    asl = 0;
    asw = 0;
    apl = 0;
    apw = 0;

    for (int i=100;i<150;i++){
        // printIris(array[i]);
        asl += array[i].sl;
    }
    for (int i=100;i<150;i++){
        // printIris(array[i]);
        asw += array[i].sw;
    }
    for (int i=100;i<150;i++){
        // printIris(array[i]);
        apl += array[i].pl;
    }
    for (int i=100;i<150;i++){
        // printIris(array[i]);
        apw += array[i].pw;
    }

    differ1[2] = pow(iris1.sl-asl/50,2);
    differ1[2] += pow(iris1.sw-asw/50,2);
    differ1[2] += pow(iris1.pl-apl/50,2);
    differ1[2] += pow(iris1.pw-apw/50,2);

    differ2[2] = pow(iris2.sl-asl/50,2);
    differ2[2] += pow(iris2.sw-asw/50,2);
    differ2[2] += pow(iris2.pl-apl/50,2);
    differ2[2] += pow(iris2.pw-apw/50,2);

    differ3[2] = pow(iris3.sl-asl/50,2);
    differ3[2] += pow(iris3.sw-asw/50,2);
    differ3[2] += pow(iris3.pl-apl/50,2);
    differ3[2] += pow(iris3.pw-apw/50,2);

    if (differ1[0]<differ1[1] && differ1[0]<differ1[2]){
        printIris(iris1);
        printf("Iris-setosa\n");
    }
    else if (differ1[1]<differ1[0] && differ1[1]<differ1[2]){
        printIris(iris1);
        printf("Iris-versicolor\n");
    }
    else{
        printIris(iris1);
        printf("Iris-virginica\n");
    }

    if (differ2[0]<differ2[1] && differ2[0]<differ2[2]){
        printIris(iris2);
        printf("Iris-setosa\n");
    }
    else if (differ2[1]<differ2[0] && differ2[1]<differ2[2]){
        printIris(iris2);
        printf("Iris-versicolor\n");
    }
    else{
        printIris(iris2);
        printf("Iris-virginica\n");
    }

    if (differ3[0]<differ3[1] && differ3[0]<differ3[2]){
        printIris(iris3);
        printf("Iris-setosa\n");
    }
    else if (differ3[1]<differ3[0] && differ3[1]<differ3[2]){
        printIris(iris3);
        printf("Iris-versicolor\n");
    }
    else{
        printIris(iris3);
        printf("Iris-virginica\n");
    }

	fclose(fp);
    return 0;
}