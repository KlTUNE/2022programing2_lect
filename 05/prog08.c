#include <stdio.h>

void swap_str_ptr(char **pa,char **pb){
    char *temp=*pa;
    *pa=*pb;
    *pb=temp;
}

int main(int argc, const char * argv[]) {
    char *a="AB";
    char *b="XY";

    printf("a=%s b=%s\n",a,b);
    swap_str_ptr(&a,&b);
    printf("a=%s b=%s\n",a,b);
    return 0;
}