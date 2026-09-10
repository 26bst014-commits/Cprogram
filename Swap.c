#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b; // a = 30
    b = a - b; // b = 10
    a = a - b; // a = 20

    printf("After swap:  a = %d, b = %d\n", a, b);
    return 0;
}
output:
         Before swap: a = 10, b = 20
         After swap:  a = 20, b = 10
