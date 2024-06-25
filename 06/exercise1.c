#include <stdio.h>
#include <string.h>
#include <time.h>
#define N 20

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
    clock_t start_clock, end_clock;
    start_clock = clock();
    char *list[]={"hoge","absdfsdfc","xdfy","fugagaga","e","abc","xy","fugadgaga","hoge","abeec","xy","fgaga","hoge","abawegawgawegawegawgaegagc","adsfaewgawefgaewxy","fugaga","hogee","abc","xy","fugaga"};

    for(int i=0;i<N;++i){
        printf("%s ", list[i]);
    }
    printf ("\n");

    bubble_str_ptr(list);

    for(int i=0;i<N;++i){
        printf("%s ", list[i]);
    }
    printf ("\n");
    end_clock = clock();
    printf("%f\n",(double)(end_clock - start_clock) / CLOCKS_PER_SEC);

    return 0;
}