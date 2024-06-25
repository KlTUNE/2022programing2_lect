#include <stdio.h>

int draw_figure(int count){
    for (int i=0;i<count;i++){
        for (int j=count-(i+1);j>0;j--){
            printf (" ");
        }
        for (int j=0;j<=i;j++){
            printf ("*");
        }
        printf ("\n");
    }

    return 0;
}