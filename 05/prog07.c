#include <stdio.h>
#include <string.h>

void swap_str(char*,char*);

void swap_str(char a[],char b[]){
    char temp[128];

    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
}

int main(){
    char a[128]="abcde";
    char b[128]="xyz";

    printf ("a:%s b:%s\n",a,b);
    swap_str(a,b);
    printf ("a:%s b:%s\n",a,b);

    return 0;
}