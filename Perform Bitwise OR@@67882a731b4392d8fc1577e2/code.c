#include <stdio.h>

int main() {
    int num1, num2, result;

    // Taking two space-separated integers as input
    scanf("%d%d", &num1, &num2);

    // Performing the bitwise OR operation
    result = num1 | num2;

    // Printing the result
    printf("%d\n", result);

    return 0;
}