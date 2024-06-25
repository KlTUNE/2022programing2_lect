#include <stdio.h>
#include <string.h>

void my_strcpy(char*,char*);

void my_strcpy(char b[],char a[]){
    int len = strlen(a);
    int i;

    for (i=0;i<len;i++){
        b[i] = a[i];
    }
    b[i] = 0;
}

int main(){
    char a[128]="abc";
    char b[128];

    my_strcpy(b,a);

    printf ("%s\n",b);

    return 0;
}