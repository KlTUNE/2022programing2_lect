#include <stdio.h>

int main(void){
    int i,len;
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    for (i=0;i<((int)sizeof(a)/sizeof(a[0]));i++){
        printf ("a[%d] = \"%s\"\n",i,a[i]);
    }

    for (i=0;i<((int)sizeof(p)/sizeof(p[0]));i++){
        printf ("p[%d] = \"%s\"\n",i,p[i]);
    }

    return 0;
}