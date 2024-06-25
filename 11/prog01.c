#include <stdio.h>

int main(void) {
    int a = 4, n = 10;
    int sum = 0;

    for (int k = 0; k <= n; k++) {
        int value = 1;
        for (int i = 0; i < n-k; i++) {
            value *= a;
        }
        sum += value;
    }

    printf("%d\n", sum);

    return 0;
}