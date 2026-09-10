#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 15, num2 = 25, sum;
    sum = add(num1, num2);
    printf("Sum = %d\n", sum);
    return 0;
}
output: 
         Sum = 40
