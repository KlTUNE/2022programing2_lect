#include <stdio.h>
#include <math.h>

int main(int argc, const char* argv[]){
    float r;
    printf ("半径: ");
    scanf ("%f",&r);
    printf ("円周:%f\n",2*M_PI*r);
    printf ("面積:%f\n",M_PI*r*r);

    return 0;
}