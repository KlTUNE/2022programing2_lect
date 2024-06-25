#include <stdio.h>
#define num 100
#define waru1 2
#define waru2 3


int main(int argc, const char* argv[]){
    for (int i=1;i<=num;i++){
        printf ("hoge");

        if (i%waru1 == 0) printf ("foo");

        if (i%waru2 == 0) printf ("bar");

        printf ("\n");
    }

    return 0;
}