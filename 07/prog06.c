#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *str1="ABCDE";
    char *str2="XYZ";
    char *str;
    int len1,len2;

    len1 = strlen(str1);
    len2 = strlen(str2);
    str = (char*)malloc((len1+len2)*sizeof(char));

    strcpy(str,str1);
    for (int i=0;i<len2;i++){
        str[len1+i] = str2[i];
    }
    printf("%s\n",str);
    free(str);

    return 0;
}