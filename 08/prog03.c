#include <stdio.h>

typedef struct iris{
    float sl, sw, pl, pw;
    char class[20];
}iris;

void printIris(iris i){
    printf("%.1f %.1f %.1f %.1f %s\n",i.sl, i.sw, i.pl, i.pw, i.class);
}

int main (void){
    iris iris1 = {6.7, 3.0, 5.2, 2.3, "Iris-virginica"};
    iris iris2 = {7.0, 3.2, 4.7, 1.4, "Iris-versicolor"};

    printIris(iris1);
    printIris(iris2);

    return 0;
}