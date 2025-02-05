#include <stdio.h>
int main() {
    int n, i, isPrime = 1;  // Assume the number is prime initially
    scanf("%d", &n);
    if (n < 2) {
        printf("Not Prime\n");
        return 0;
    }
    for (i = 2; i < n; i++) {  // Check divisibility from 2 to n-1
        if (n % i == 0) {
            isPrime = 0;  // Number is not prime
            break;
        }
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}