#include <stdio.h>

int main(int argc, char **argv) {
  float hignt;
  int weight;
  printf ("hignt(m): ");
  scanf ("%f",&hignt);
  printf ("weight(kg): ");
  scanf ("%d",&weight);
  printf ("%.1f\n",(float)weight / (hignt*hignt));

  return 0;
}