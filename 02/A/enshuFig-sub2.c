#include <stdio.h>

int draw_figure(int count){
    for (int i=1;i<=count;i++){
        for (int j=0;j<i;j++){
            printf ("*");
        }
        printf ("\n");
    }

    return 0;
}