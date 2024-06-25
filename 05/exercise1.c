#include <stdio.h>
#include <string.h>
#define N 4

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

void bubble_str_ptr(char *plist[]){
    for(int i=0;i<N;++i){
        for(int j=i+1;j<N;j++)
        sort_str_ptr(&plist[i],&plist[j]);
    }
}

int main(int argc, const char * argv[]) {
    char *list[]={"hoge","abc","xy","fugagaga"};

    for(int i=0;i<N;++i){
        printf("%s ", list[i]);
    }
    printf ("\n");

    bubble_str_ptr(list);

    for(int i=0;i<N;++i){
        printf("%s ", list[i]);
    }
    printf ("\n");

    return 0;
}