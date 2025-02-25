#include <stdio.h>
// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0;  // Numbers less than 2 are not prime
    for (int i = 2; i * i <= n; i++) {  // Loop up to sqrt(n)
        if (n % i == 0) return 0;  // If divisible, it's not prime
    }
    return 1;  // If no divisors found, it's prime
}

int main() {
    int t;
    scanf("%d", &t);  // Read number of test cases
    while (t--) {  
        int num;
        scanf("%d", &num);  // Read each number
        printf("%d\n", isPrime(num));  // Print 1 if prime, 0 otherwise
    }
    return 0;
}