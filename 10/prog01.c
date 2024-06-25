#include <stdio.h>
#define DEBUG_MESSAGE

int main(void){
    #ifdef DEBUG
    printf("debug message\n");
    #endif

    return 0;
}