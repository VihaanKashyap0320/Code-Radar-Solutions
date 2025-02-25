#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0;  // 0 and 1 are not prime
    for (int i = 2; i < n; i++) {  // Check divisibility from 2 to n-1
        if (n % i == 0) return 0;  // If divisible, it's not prime
    }
    return 1;  // If no divisors found, it's prime
}