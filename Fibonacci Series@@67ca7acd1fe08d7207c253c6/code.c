void fibonacciSeries(int n) {
    int a = 0, b = 1, sum;
    if (n >= 1) printf("%d", a);
    if (n >= 2) printf(" %d", b);
    for (int i = 2; i < n; i++) {  
        sum = a + b;
        printf(" %d", sum);
        a = b;
        b = sum;
    }
    printf("\n"); 
}