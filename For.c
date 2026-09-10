#include <stdio.h>

int main() {
    int n = 10, sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
output:
        Sum of first 10 natural numbers = 55
