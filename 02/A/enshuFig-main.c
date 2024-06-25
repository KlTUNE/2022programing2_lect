#include <stdio.h>
extern int draw_figure(int);

int main(){
    int count;

    printf ("Size of figure? ");
    scanf ("%d",&count);
    draw_figure(count);

    return 0;
}