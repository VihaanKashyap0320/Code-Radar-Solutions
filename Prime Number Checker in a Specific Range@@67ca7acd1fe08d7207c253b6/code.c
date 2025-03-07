// Your code here...
void printPrimesInRange(int a, int b) {
    int found = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            if (found) printf(" ");
            printf("%d", i);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No prime numbers");
    }

    printf("\n");
}