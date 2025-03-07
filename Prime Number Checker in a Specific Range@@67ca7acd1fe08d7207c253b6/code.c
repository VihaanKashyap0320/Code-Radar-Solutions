// Your code here...
int isPrime(int num) {
    if (num < 2) return 0; // Numbers < 2 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to sqrt(num)
        if (num % i == 0) return 0;
    }
    return 1;
}
