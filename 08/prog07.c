#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct iris{
    double sl, sw, pl, pw;
    char class[20];
}iris;

void printIris(iris i){
    printf("%.1lf %.1lf %.1lf %.1lf %s\n",i.sl, i.sw, i.pl, i.pw, i.class);
}

int main (void){
	FILE *fp;
	char line[256], *str;
    int count = 0;
    double asl, asw, apl, apw, ssl, ssw, spl, spw;
    iris array[150];
    iris iris1 = {};

    fp=fopen("Iris.txt","r");

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
        array[count] = iris1;
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

    for (int i=0;i<50;i++){
        // printIris(array[i]);
        ssl += pow(array[i].sl-asl/50,2);
    }
    for (int i=0;i<50;i++){
        // printIris(array[i]);
        ssw += pow(array[i].sw-asw/50,2);
    }
    for (int i=0;i<50;i++){
        // printIris(array[i]);
        spl += pow(array[i].pl-apl/50,2);
    }
    for (int i=0;i<50;i++){
        // printIris(array[i]);
        spw += pow(array[i].pw-apw/50,2);
    }
    printf("Iris-setosa(avg,sd)\n");
    printf (" sepal_length: (%.2lf,%.2lf)\n",asl/50,sqrt(ssl));
    printf (" sepal_width:  (%.2lf,%.2lf)\n",asw/50,sqrt(ssw));
    printf (" petal_length: (%.2lf,%.2lf)\n",apl/50,sqrt(spl));
    printf (" petal_width:  (%.2lf,%.2lf)\n",apw/50,sqrt(spw));

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

    for (int i=50;i<100;i++){
        // printIris(array[i]);
        ssl += pow(array[i].sl-asl/50,2);
    }
    for (int i=50;i<100;i++){
        // printIris(array[i]);
        ssw += pow(array[i].sw-asw/50,2);
    }
    for (int i=50;i<100;i++){
        // printIris(array[i]);
        spl += pow(array[i].pl-apl/50,2);
    }
    for (int i=50;i<100;i++){
        // printIris(array[i]);
        spw += pow(array[i].pw-apw/50,2);
    }
    printf("Iris-versicolor(avg,sd)\n");
    printf (" sepal_length: (%.2lf,%.2lf)\n",asl/50,sqrt(ssl));
    printf (" sepal_width:  (%.2lf,%.2lf)\n",asw/50,sqrt(ssw));
    printf (" petal_length: (%.2lf,%.2lf)\n",apl/50,sqrt(spl));
    printf (" petal_width:  (%.2lf,%.2lf)\n",apw/50,sqrt(spw));

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

    for (int i=100;i<150;i++){
        // printIris(array[i]);
        ssl += pow(array[i].sl-asl/50,2);
    }
    for (int i=100;i<150;i++){
        // printIris(array[i]);
        ssw += pow(array[i].sw-asw/50,2);
    }
    for (int i=100;i<150;i++){
        // printIris(array[i]);
        spl += pow(array[i].pl-apl/50,2);
    }
    for (int i=100;i<150;i++){
        // printIris(array[i]);
        spw += pow(array[i].pw-apw/50,2);
    }
    printf("Iris-versicolor(avg,sd)\n");
    printf (" sepal_length: (%.2lf,%.2lf)\n",asl/50,sqrt(ssl));
    printf (" sepal_width:  (%.2lf,%.2lf)\n",asw/50,sqrt(ssw));
    printf (" petal_length: (%.2lf,%.2lf)\n",apl/50,sqrt(spl));
    printf (" petal_width:  (%.2lf,%.2lf)\n",apw/50,sqrt(spw));

	fclose(fp);
    return 0;
}