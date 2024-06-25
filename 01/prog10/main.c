#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define min 3
#define max 5

int main(int argc, char **argv) {
  srand((int)time(NULL));
  printf ("%d\n",rand()%(max-min+1)+min);

  return 0;
}