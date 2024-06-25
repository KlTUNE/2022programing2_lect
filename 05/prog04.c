#include <stdio.h>
#include <string.h>

int main(){
    char *str = "abcd";

    for (int i=0;i<((int)strlen(str));i++){
        printf ("%c\n",str[i]);
    }

    return 0;
}