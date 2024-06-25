#include <stdio.h>
#include <math.h>


void getAvgSD (double num1,double num2,double *avg,double *sd){
    *avg = (num1+num2)/2;
    *sd = sqrt(pow(num1-(*avg),2)+pow(num2-(*avg),2));
}

int main (){
    double num1=0,num2=0,avg=0,sd=0;
    scanf ("%lf,%lf",&num1,&num2);
    getAvgSD (num1,num2,&avg,&sd);
    printf ("avg:%.2lf sd:%.2lf\n",avg,sd);

    return 0;
}