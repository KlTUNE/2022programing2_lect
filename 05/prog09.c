#include <stdio.h>
#include <string.h>

void swap_str_ptr(char **pa,char **pb){
    char *temp=*pa;
    *pa=*pb;
    *pb=temp;
}

void sort_str_ptr(char **pa,char **pb){
    int lena = strlen(*pa);
    int lenb = strlen(*pb);
    if (lena > lenb){
        swap_str_ptr(pa,pb);
    }
}

int main(int argc, const char * argv[]) {
    char *a="abcde";
    char *b="xyz";

    printf("a=%s b=%s\n",a,b);
    sort_str_ptr(&a,&b);
    printf("a=%s b=%s\n",a,b);
    return 0;
}