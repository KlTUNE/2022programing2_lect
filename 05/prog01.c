#include <stdio.h>
#include <string.h>

int main (){
    char str1[128]="abc";
    char str2[]="cde";
    char *str="fgh";

    int len = strlen(str1);
    int size = sizeof(str1);
    printf ("str1 strlen:%d  sizeof:%d\n",len,size);

    len = strlen(str2);
    size = sizeof(str2);
    printf ("str2 strlen:%d  sizeof:%d\n",len,size);

    len = strlen(str);
    size = sizeof(str);
    printf ("*str strlen:%d  sizeof:%d\n",len,size);

    return 0;
}