#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
  int min, max;
  srand((int)time(NULL));
  printf ("min: ");
  scanf ("%d",&min);
  printf ("max: ");
  scanf ("%d",&max);
  printf ("%d\n",rand()%(max-min+1)+min);

  return 0;
}