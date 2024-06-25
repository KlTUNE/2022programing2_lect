#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    char in[100];

    printf ("input:");
    scanf ("%s",in);
    printf("output:");
    for (int i=0;i<(int)strlen(in);i++){
        printf("%c",toupper(in[i]));
    }
    printf ("\n");

    return 0;
}