#include <stdio.h>
#include <math.h>  // Needed for sqrt()

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to sqrt(num)
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to print primes in the range [a, b]
void printPrimesInRange(int a, int b) {
    int found = 0;  // Flag to check if at least one prime is found

    for (int i = a; i <= b; i++) {  // Loop correctly from 'a' to 'b'
        if (isPrime(i)) {
            if (found) printf(" ");  // Print space before the next number
            printf("%d ", i);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No prime numbers");  // If no prime found, print message
    }

    printf("\n");  // Ensure a newline at the end
}