#include <stdio.h>
#define num 10
#define waru 3

int main(int argc, const char* argv[]){
    for (int i=1;i<=num;i++){
        printf ("hoge");
        if (i%waru == 0) printf ("\n");
    }

    printf ("\n");

    return 0;
}