#include <stdio.h>

int my_strlen(char*);

int my_strlen(char str[]){
    int i = 0;

    while (((int)str[i]) != 0){
        i++;
    }

    return i+1;
}

int main (){
    char str1[]="hello";
    char str2[] = "hello world";
    char *str = "hellohello";

    printf ("%d\n",my_strlen(str1));
    printf ("%d\n",my_strlen(str2));
    printf ("%d\n",my_strlen(str));

    return 0;
}