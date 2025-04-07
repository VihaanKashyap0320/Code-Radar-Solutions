#include <stdio.h>
int isprime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (isprime(arr[i])) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}