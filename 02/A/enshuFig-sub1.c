#include <stdio.h>

int draw_figure(int count){
    for (int i=0;i<count;i++){
        for (int j=0;j<count;j++){
            printf ("*");
        }
        printf ("\n");
    }

    return 0;
}