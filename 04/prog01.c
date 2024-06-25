#include <stdio.h>

void swap(int *pn1, int *pn2) {
  int tmp;
  tmp = *pn1;
  *pn1 = *pn2;
  *pn2 = tmp;
}

void dame_swap(int n1, int n2) {
  int tmp;
  tmp = n1;
  n1 = n2;
  n2 = tmp;
}

int main(void) {
  int n1 = 10, n2 = 2;

  printf("%d, %d\n", n1, n2);

  swap(&n1, &n2);

  printf("%d, %d\n", n1, n2);

  return 0;
}