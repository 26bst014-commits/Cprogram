#include <stdio.h>

int main() {
    int n = 29, i, isPrime = 1;

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a Prime number\n", n);
    } else {
        printf("%d is not a Prime number\n", n);
    }
    return 0;
}
output:
        29 is a Prime number
