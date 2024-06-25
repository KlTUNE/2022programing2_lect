#include <stdio.h>

struct address{
    double ido, keido;
    char jusyo[128];
};

int main (void){
    struct address aikou = {35.1834166, 137.1108532,"愛知県豊田市八草町八千草１２４７"};
    struct address meiden = {35.2394627, 137.0147891, "愛知県名古屋市千種区若水３丁目２−１２"};

    printf("%lf %lf %s\n", aikou.ido, aikou.keido, aikou.jusyo);
    printf("%lf %lf %s\n", meiden.ido, meiden.keido, meiden.jusyo);

    return 0;
}